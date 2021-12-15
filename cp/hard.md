## EDITORIAL FOR THE HARD VERSION

#### Difference in both the Versions
The main difference between the easy and the hard version is the presence of mutiple trading option present in the harder version.
So Mahesh can now execute the buy and sell cycle many times to maximize his profit.

A effect of this can be seen with the following example -

Let us consider an array `a` with total of `n` elements in it such that - 
```
a = [ 45 24 35 31 40 22 38 ]
```

So in the Easier version of the problem we have to just buy at 24 and sell at 40, this would give a total maximum profit of 16 and it could be seen by making all the cases of double transaction trading or also by the **O(N) linear time algorithm** proposed in the previous editorial for the easier version.
We also have other method by buying at 22 and selling at 38 which also proposes profit of 16.

But when we revoke the limit on the trade to be double transaction , we now get many more possible cases for trading.
For eg - Buy at 24 sell at 35 then again buy at 31 and sell at 38 giving a total profit of 11 + 7 = 19 which is already more than the profit we could have created in a single transaction.

However is this the most profitable solution ??
Presumably no, as we can buy at 24,31 and 22 and sell at 35, 40, 38 respectively to give a total profit of 36 which can easily be proved to be the maximum possible profit on any possible transaction.

This code is going to be tough and we cannot use brute force because that will be highly in-efficient.
Rather we will try with a bit optimized method in **O(N<sup>3</sup>) Time Complexity**


#### With a O(N<SUP>3</SUP>) Time Complexity Algorithm
#####  Developed only for a simpler version of this hard problem
When you look at the task carefully we can see a lot of easy version problems to be solved simultaneously.
For an example let us say Mahesh does 2 sets of transaction in the stock for that day so basically the problem boils down to seperating the array into 2 contiguous sub arrays such that the sum of max_profit of single set transaction trade is maximum.

So we can iterate over the array and for each case we can calculate the above given thing.

##### Use of 2D array
However it is not much useful for this problem to use 2-D arrays as they will lead to a memory limit exceeded array most probably, but you can store the maximum profit of a single set transaction trade from i<sup>th</sup> index to the j<sup>th</sup> index in a n*n 2D array which can be then used for finding the maximum profit easily as far as 2 set transaction is concerned.

##### A Tricky problem in this
However in the above approach developed for solving the 2 set transaction problem we cannot find the maximum profit for 2 set so easily because we have to cover a end point error.
Consider a 2D Matrix m<sub>ij</sub> where 0 <= i,j <= n than basically we need to find a value t such that if we take the sum of single set transaction maximum in them it comes out to be the maximum but we cannot generate a expression directly to be 
max(m<sub>it</sub>+m<sub>(t+1)j</sub>) because in case in the subarray from i to t we don't include the t<sub>th</sub> element in the transaction than the related quantity here would be max(m<sub>it</sub>+m<sub>(l+1)j</sub>) where l is the selling point of the previous sub array where the first set of transaction completed, so in this way we can have a complex situation.

However our solution of iterating will anyhow work because we have been iterating from the start and the case of taking the immediate next element of selling point will be taken care of.
**Also from the wastage of test cases we can see for a possible optimization here and will follow up next with a more optimized algorithm later on**

##### EVEN GENERAL SOLUTION
With the algorithm used for the previous easier problem this question can be given with a recursive solution which can solve the problem. The general solution is very straightforward and even if we use the O(N) solution of last easy version we get a overall O(N<sup>N</sup>) solution which would be very slow.
In this case, we simply calculate the profit corresponding to all the possible sets of transactions and find out the maximum profit out of them.

##### A FASTER SOLUTION
The final solution to this problem would be peak valley approach.
We state the solution method first -
If we analyze the graph, we notice that the points of interest are the consecutive valleys and peaks.

Mathematically speaking: Total Max Profit= summation of all consecutive pairs of profit and loss.

The key point is we need to consider every peak immediately following a valley to maximize the profit. In case we skip one of the peaks (trying to obtain more profit), we will end up losing the profit over one of the transactions leading to an overall lesser profit.
This solution would solve the problem in O(N) time and O(1) space complexity.

However the proof of this solution is quite rigorous and time consuming -
