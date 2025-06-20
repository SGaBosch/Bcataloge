% Two-dimensional interpolation using a Simulink lookup table
function z = sim_interp2(axis_x, axis_y, axis_z, table_in_x, table_in_y)

    global sim_interp2_data;
    
    sim_interp2_data.axis_x = axis_x;
    sim_interp2_data.axis_y = axis_y;
    sim_interp2_data.axis_z = axis_z;

    sim_interp2_data.table_in_x = table_in_x;
    sim_interp2_data.table_in_y = table_in_y;

    out = sim('interp2_sim');
    z = out.logsout{1}.Values.Data;
    
end