## EDITORIAL FOR THE EASY VERSION

As the problem says that Mahesh can only keep a maximum of 1 share with it at any time and he has to start with zero as well as end with zero shares only, we can consider that basically the problem is about moving ahead in the array and picking any two values such that their difference is the greatest positive number possible.

Here I will be proposing 2 methods to solve this problem - 

### With O(N<sup>2</sup>) Time Complexity
A Naive algorithm to solve the problem would be to iterate over the array and for each single iteration we will iterate over the left out part of the array so that we can create all the possible combinations and can select the maximum difference. If it comes out to be negative or zero than we output -1.

### With O(N) Time Complexity
For those who are interested let's propose a more efficient way of solving this problem which is not although required for this problem as the naive algorithm would suffice in this case.
Let us consider an array `a` of `n` elements so let us say that we have integers i and j such that 1<= i < j <=n and these denote the time at which Mahesh buys and sells the stock respectively.
We can get that for a selected i for any integer j such that i < t <= n we get the maximum profit when we select the maximum valued number.
Similar argument can be said for the value of i as well if j is fixed.
So in that sense if we fix any i we just need to get the maximum valued number after it to get the answer or if we fix the value of j we just need the minimum valued number before it to get the answer.

However the idea is quite simple but the problem arises that we don't know both i and j and the above idea works well only if one is fixed. In that case we can either go for a O(N<sup>2</sup>) algorithm again iterating over each element and then finding the maximum among the next elements.

However their is a clever implementation which uses the idea of iterating over the array and storing the minimum value in the array so far and checking whether we can substract the current number to get a max_profit or not using a variable to store the maximum difference till now.
This will do the problem in a *single pass linear algorithm*