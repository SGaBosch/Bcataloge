% Generation of the data for test cases for 1D lookup tables
% in TargetLink using 1D interpolation in MATLAB
function [cal, io] = get_TC_interp_1D( ...
    table_in_dd, ...
    table_axis_x_dd, ...
    table_out_dd, ...
    n_io, ...
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

table_in_scaling_dd = TC_DD_Data.get_scaling(table_in_dd.Scaling);
table_out_scaling_dd = TC_DD_Data.get_scaling(table_out_dd.Scaling);
table_in_type_dd = TC_DD_Data.get_type(table_in_dd.Type);


% process dd

n_cal = table_axis_x_dd.Width - 1;
p_x = table_in_scaling_dd.LSB;
p_y = table_out_scaling_dd.LSB;

% the division by (1/p_x) is better than multiplication by p_x in this case
table_in_iv = table_in_type_dd.InvalidValue/(1/p_x); 


% define test case calibrations

x_d = round((table_in_dd.Max - table_in_dd.Min)/n_cal/rwf_cal);

y_n_l = table_out_dd.Min/p_y;
y_n_r = table_out_dd.Max/p_y;
y_d = round((y_n_r - y_n_l)/n_cal/rwf_cal);

cal.axis_x = rand_fixed_split(n_cal, table_in_dd.Min, table_in_dd.Max, x_d);
cal.axis_y_A = p_y*rand_fixed_split(n_cal, y_n_l, y_n_r, y_d);
cal.axis_y_B = p_y*rand_fixed_split(n_cal, y_n_l, y_n_r, y_d);
cal.axis_y_C = p_y*rand_fixed_split(n_cal, y_n_l, y_n_r, y_d);


% visualization

if vis_flag
    figure;
    title( ...
        strcat(plot_settings.tc_name, ': Calibrations'), ...
        plot_settings.title_settings{:} ...
        );
    hold on;
    grid on;
    plot(cal.axis_x, cal.axis_y_A, '-x');
    plot(cal.axis_x, cal.axis_y_B, '-x');
    plot(cal.axis_x, cal.axis_y_C, '-x');
    legend('A', 'B', 'C', plot_settings.legend_settings{:});
    xlabel('x');
    ylabel('y');
end


% interpolation

closest_p_y = closest(p_y);

gen_interp = @(table_out) (@(x) interp1_clip(cal.axis_x, table_out, x));
interp_A = gen_interp(cal.axis_y_A);
interp_B = gen_interp(cal.axis_y_B);
interp_C = gen_interp(cal.axis_y_C);

interp_ABC = @(x, s) closest_p_y( ...
        (s==1)*interp_B(x) + ...
        (s==2)*interp_C(x) + ...
        (not(s==1 || s==2))*interp_A(x) ...
    ); 


% input

x_n_l = table_in_dd.Min/p_x;
x_n_r = table_in_dd.Max/p_x;
x_d = (x_n_r - x_n_l)/n_io/rwf_io;
  
x_p = rand_fixed_split(n_io, x_n_l, x_n_r, x_d)/(1/p_x);
x_p = ...
    [ ...
        x_p(1), ...
        table_in_dd.Min + p_x, ...
        x_p(2 : (end - 1)), ...
        table_in_dd.Max - p_x, ...
        table_in_dd.Max, ...
        table_in_dd.Max + p_x, ...
        table_in_iv ...
    ];

n_io = length(x_p);
ones_n = ones(1, n_io);
switches = [0, 1, 2, 3, 254, 255];
k = length(switches);

io.table_in = repmat(x_p, 1, k);
io.switch = kron(switches, ones_n);


% approximation of the expected output

io.table_out = arrayfun(@(x, s) interp_ABC(x, s), io.table_in, io.switch);


% visualization

if vis_flag
        
    figure;
    subplot(3, 1, 1);
    hold on;
    grid on;
    stairs(io.table_in, '-rx');
    title( ...
        strcat(plot_settings.tc_name, ': table input'), ...
        plot_settings.title_settings{:} ...
        );
    subplot(3, 1, 2);
    hold on;
    grid on;
    stairs(io.switch, '-gx');
    title( ...
        strcat(plot_settings.tc_name, ': switch'), ...
        plot_settings.title_settings{:} ...
        );
    subplot(3, 1, 3);
    hold on;
    grid on;
    stairs(io.table_out, '-bx');
    xlabel('time step');
    title( ...
        strcat(plot_settings.tc_name, ': expected output'), ...
        plot_settings.title_settings{:} ...
        );

end

end