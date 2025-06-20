% Generation of the data for test cases for 2D lookup tables
% in TargetLink using 2D interpolation in MATLAB
function [cal, io] = get_TC_interp_2D( ...
    table_in_x_dd, ...
    table_in_y_dd, ...
    table_axis_x_dd, ...
    table_axis_y_dd, ...
    table_out_dd, ...
    n_io_x, ...
    n_io_y, ...
    rwf_cal, ...
    rwf_io, ...
    plot_settings ...
    )


% background

closest = @(p) (@(x) round(x/p)*p);

if isempty(plot_settings)
    vis_flag = false;
else
    vis_flag = true;
end


% read dd

table_in_x_scaling_dd = TC_DD_Data.get_scaling(table_in_x_dd.Scaling);
table_in_y_scaling_dd = TC_DD_Data.get_scaling(table_in_y_dd.Scaling);
table_out_scaling_dd = TC_DD_Data.get_scaling(table_out_dd.Scaling);
table_in_x_type_dd = TC_DD_Data.get_type(table_in_x_dd.Type);
table_in_y_type_dd = TC_DD_Data.get_type(table_in_y_dd.Type);


% process dd

n_x_cal = table_axis_x_dd.Width - 1;
n_y_cal = table_axis_y_dd.Width - 1;
p_x = table_in_x_scaling_dd.LSB;
p_y = table_in_y_scaling_dd.LSB;
p_z = table_out_scaling_dd.LSB;

% the division by (1/p_*) is better than multiplication by p_* in this case
table_in_x_iv = table_in_x_type_dd.InvalidValue/(1/p_x); 
table_in_y_iv = table_in_y_type_dd.InvalidValue/(1/p_y); 

closest_p_z = closest(p_z);


% define test case calibrations

x_d = round((table_in_x_dd.Max - table_in_x_dd.Min)/n_x_cal/rwf_cal);
y_d = round((table_in_y_dd.Max - table_in_y_dd.Min)/n_y_cal/rwf_cal);

cal.axis_x = rand_fixed_split( ...
    n_x_cal, table_in_x_dd.Min, table_in_x_dd.Max, x_d ...
    );
cal.axis_y = rand_fixed_split( ...
    n_y_cal, table_in_y_dd.Min, table_in_y_dd.Max, y_d ...
    );

[xm, ym] = meshgrid(cal.axis_x, cal.axis_y);

cal.axis_z_A = xm/max(cal.axis_x) + ym/max(cal.axis_y);
cal.axis_z_B = cal.axis_z_A;
cal.axis_z_C = cal.axis_z_A;

sz = size(cal.axis_z_A);
cal.axis_z_A = cal.axis_z_A + rand(sz);
cal.axis_z_B = cal.axis_z_B + rand(sz);
cal.axis_z_C = cal.axis_z_C + rand(sz);

cal.axis_z_A = cal.axis_z_A - min(cal.axis_z_A, [], 'all');
cal.axis_z_B = cal.axis_z_B - min(cal.axis_z_B, [], 'all');
cal.axis_z_C = cal.axis_z_C - min(cal.axis_z_C, [], 'all');

cal.axis_z_A = table_out_dd.Max*cal.axis_z_A/max(cal.axis_z_A, [], 'all');
cal.axis_z_B = table_out_dd.Max*cal.axis_z_B/max(cal.axis_z_B, [], 'all');
cal.axis_z_C = table_out_dd.Max*cal.axis_z_C/max(cal.axis_z_C, [], 'all');

cal.axis_z_A = closest_p_z(cal.axis_z_A);
cal.axis_z_A = cal.axis_z_A';

cal.axis_z_B = closest_p_z(cal.axis_z_B);
cal.axis_z_B = cal.axis_z_B';

cal.axis_z_C = closest_p_z(cal.axis_z_C);
cal.axis_z_C = cal.axis_z_C';


% visualization

if vis_flag
    
    figure;
    grid on;
    mesh(xm, ym, cal.axis_z_A');
    xlabel('x');
    ylabel('y');
    zlabel('z');
    title( ...
        strcat(plot_settings.tc_name, ': Table A'), ...
        plot_settings.title_settings{:} ...
        );

    figure;
    grid on;
    mesh(xm, ym, cal.axis_z_B');
    xlabel('x');
    ylabel('y');
    zlabel('z');
    title( ...
        strcat(plot_settings.tc_name, ': Table B'), ...
        plot_settings.title_settings{:} ...
        );

    figure;
    grid on;
    mesh(xm, ym, cal.axis_z_C');
    xlabel('x');
    ylabel('y');
    zlabel('z');
    title( ...
        strcat(plot_settings.tc_name, ': Table C'), ...
        plot_settings.title_settings{:} ...
        );
    
end


% interpolation

gen_interp = ...
    @(table_out) (@(x, y) sim_interp2(cal.axis_x, cal.axis_y, table_out', x, y));
interp_A = gen_interp(cal.axis_z_A');
interp_B = gen_interp(cal.axis_z_B');
interp_C = gen_interp(cal.axis_z_C');

interp_ABC = @(x, y, s) closest_p_z( ...
        (s==1)*interp_B(x, y) + ...
        (s==2)*interp_C(x, y) + ...
        (not(s==1 || s==2))*interp_A(x, y) ...
    ); 


% input

x_n_l = table_in_x_dd.Min/p_x;
x_n_r = table_in_x_dd.Max/p_x;

y_n_l = table_in_y_dd.Min/p_y;
y_n_r = table_in_y_dd.Max/p_y;

x_d = (x_n_r - x_n_l)/n_io_x/rwf_io;
x_p = rand_fixed_split(n_io_x, x_n_l, x_n_r, x_d)/(1/p_x);
x_p = ...
    [ ...
        x_p(1), ...
        table_in_x_dd.Min + p_x, ...
        x_p(2 : (end - 1)), ...
        table_in_x_dd.Max - p_x, ...
        table_in_x_dd.Max, ...
        table_in_x_dd.Max + p_x, ...
        table_in_x_iv ...
    ];

y_d = (y_n_r - y_n_l)/n_io_y/rwf_io;
y_p = rand_fixed_split(n_io_y, y_n_l, y_n_r, y_d)/(1/p_y);
y_p = ...
    [ ...
        y_p(1), ...
        table_in_y_dd.Min + p_y, ...
        y_p(2 : (end - 1)), ...
        table_in_y_dd.Max - p_y, ...
        table_in_y_dd.Max, ...
        table_in_y_dd.Max + p_y, ...
        table_in_y_iv ...
    ];

[x_m_p, y_m_p] = meshgrid(x_p, y_p);
x_p = x_m_p(:)';
y_p = y_m_p(:)';

n_io = length(x_p);
ones_n = ones(1, n_io);
switches = [0, 1, 2, 3, 254, 255];
k = length(switches);

io.table_in_x = repmat(x_p, 1, k);
io.table_in_y = repmat(y_p, 1, k);
io.switch = kron(switches, ones_n);


% approximation of the expected output

io.table_out = arrayfun( ...
    @(x, y, s) interp_ABC(x, y, s), ...
    io.table_in_x, io.table_in_y, io.switch ...
    );


% visualization

if vis_flag
        
    figure;
    title( ...
        strcat(plot_settings.tc_name, ': Inports/Outpors'), ...
        plot_settings.title_settings{:} ...
        );
    subplot(4, 1, 1);
    hold on;
    grid on;
    stairs(io.table_in_x, '-rx');
    title( ...
        strcat(plot_settings.tc_name, ': table input along x'), ...
        plot_settings.title_settings{:} ...
        );
    
    subplot(4, 1, 2);
    hold on;
    grid on;
    stairs(io.table_in_y, '-gx');
    
    title( ...
        strcat(plot_settings.tc_name, ': table input along y'), ...
        plot_settings.title_settings{:} ...
        );

    subplot(4, 1, 3);
    hold on;
    grid on;
    stairs(io.switch, '-bx');
    title( ...
        strcat(plot_settings.tc_name, ': switch'), ...
        plot_settings.title_settings{:} ...
        );

    subplot(4, 1, 4);
    hold on;
    grid on;
    stairs(io.table_out, '-kx');
    xlabel('time step');
    title( ...
        strcat(plot_settings.tc_name, ': expected output'), ...
        plot_settings.title_settings{:} ...
        );

end

end