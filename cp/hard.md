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

#### Use of 2D array
However it is not much useful for this problem to use 2-D arrays as they will lead to a memory limit exceeded array most probably, but you can store the maximum profit of a single set transaction trade from i<sup>th</sup> index to the j<sup>th</sup> index in a n*n 2D array which can be then used for finding the maximum profit easily as far as 2 set transaction is concerned.