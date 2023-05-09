## EDITORIAL FOR THE HARD VERSION

#### Difference in both the Versions
The main difference between the easy and the hard version is the presence of mutiple trading option present in the harder version.
So Mahesh can now execute the buy and sell cycle many times to maximize his profit. \\
A effect of this can be seen with the following example - \\
Let us consider an array `a` with total of `n` elements in it such that - 
```
a = [ 45 24 35 31 40 22 38 ]
```
So in the Easier version of the problem we have to just buy at 24 and sell at 40, this would give a total maximum profit of 16. We also have other method by buying at 22 and selling at 38 which also gives a profit of 16.
But when we revoke the limit on the trade to be double transaction , we now get many more possible cases for trading.
For eg - Buy at 24 sell at 35 then again buy at 31 and sell at 38 giving a total profit of 11 + 7 = 19 which is already more than the profit we could have created in a single transaction. \\
However we can increase the profit further by buying at 24, 31 and 22 and selling at 35, 40, 38 respectively to give a total profit of 36 which can easily be proved to be the maximum possible profit for any possible transaction. \\

#### AN EFFICIENT SOLUTION
The solution to this problem requires an observation which hints for a greedy strategy to solve the problem.
We state the solution method first - \\
If we analyze the values of stock at different points, the values of interest are the consecutive valleys and peaks in the graph. \\
Mathematically speaking: Total Max Profit = summation of profit dur to all consecutive pairs of valleys and peaks. \\
The key point is we need to consider every peak immediately following a valley to maximize the profit. In case we skip one of the peaks (trying to obtain more profit), we will end up losing the profit over one of the transactions leading to an overall lesser profit. This solution would solve the problem in **O(N) time and O(1) space complexity**. A proof for this solution follows in the next section. \\

#### CORRECTNESS PROOF
Just consider any optimal solution of the problem given by a series of buy and sell operations. \\
It is obvious that the last operation of the series of buy and sell would be a sell operation. It is optimal to do that at the local maxima (This will only increase the profit if any changes occur). Now take the last buy operation, which is again optimal to be done at a local minima. In case one pair of peak-valley is not being considered in the optimal solution you can add it to get a better profit (thus a better solution). \\
You can contruct the greedy solution from the assumed optimal solution using this construction and in each step profit is non-decreasing thus the greedy solution proposed is an optimal solution.
