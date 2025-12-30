function [ epsilon ] = MetropolisHastings( epsilon_0, num_iterations, fpdf )
%METROPOLISHASTINGS Use the Metropolis-Hastings algorithm to obtain draws
%from a given density via approximation.
%
%   Parameters:
%
%       epsilon_0 = the initial value of the vector
%       num_iterations = the number of iterations to run
%       fpdf = the density from which we wish to draw
%
%   Example:
%
%       epsilon = MetropolisHastings( 0, 1000, @(x)( (x > 0) * exp(-x) ) );
%
%

% pre-generate the random variables
normal_randoms = randn(num_iterations,1);
uniform_randoms = rand(num_iterations,1);

epsilon = zeros(num_iterations,1);
previous_epsilon = epsilon_0;

% for each random element
for i = 1:num_iterations

    % add a normally distributed noise
    epsilon_tilde = previous_epsilon + normal_randoms(i);

    % if f(e~) > f(e_i-1)
    if fpdf( epsilon_tilde ) > fpdf( previous_epsilon )
        epsilon(i) = epsilon_tilde;
    else
        % with probability f(e~)/f(e_i-1)
        if uniform_randoms(i) <= fpdf( epsilon_tilde ) / fpdf( previous_epsilon )
            epsilon(i) = epsilon_tilde;
        else
            epsilon(i) = previous_epsilon;
        end
    end

    % update the previous draw
    previous_epsilon = epsilon(i);
end

end
% For example, it is easy to draw from a normal distribution cut off at 1.5:

fpdf = @(x) double(abs(x) <= 1.5) .* normpdf( x );
guess = 0;
num_iterations = 500;
random_draws = MetropolisHastings(guess, num_iterations, fpdf);
use_draws = random_draws(50:end); % recall that the algorithm has a burn-in