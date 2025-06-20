% Random split of a data set
function xs = rand_fixed_split(n, n_l, n_r, max_d)

arguments
    n double {mustBeInteger, mustBePositive, mustBeScalarOrEmpty, mustBeNonempty}
    n_l double {mustBeInteger, mustBeScalarOrEmpty, mustBeNonempty}
    n_r double {mustBeInteger, mustBeScalarOrEmpty, mustBeNonempty}
    max_d double {mustBeInteger, mustBePositive, mustBeScalarOrEmpty, mustBeNonempty}
end

assert(n_l < n_r, 'not (n_l < n_r)');

s = n_r - n_l;

d = s/n;

assert(2*(max_d + 1) < d, 'not (2*(max_d + 1)< (n_r - n_l)/n)');

bs = randi([-max_d, max_d], 1, n - 1);

xs = round(d*(1 : (n - 1)) + bs);
xs = [n_l xs n_r];

end