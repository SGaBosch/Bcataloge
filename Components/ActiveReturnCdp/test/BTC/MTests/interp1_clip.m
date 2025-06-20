% One-dimensional interpolation with clip extrapolation
function y = interp1_clip(axis_x, axis_y, x)

arguments
    axis_x double {mustBeNonempty, mustBeFinite}
    axis_y double {mustBeNonempty, mustBeFinite}
    x double {mustBeScalarOrEmpty, mustBeNonempty, mustBeFinite}
end

if axis_x(1) <= x && x <= axis_x(end)
    y = interp1(axis_x, axis_y, x, 'linear');
elseif x < axis_x(1)
    y = axis_y(1);
else
    y = axis_y(end);
end

end