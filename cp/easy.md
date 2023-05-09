## EDITORIAL FOR THE EASY VERSION

As the problem says that Mahesh can only keep a maximum of 1 share with it at any time and he has to start with zero as well as end with zero shares only, we can consider that basically the problem is about moving ahead in the array and picking any two values such that their difference is the greatest positive number possible.
It can be solved **With O(N) Time Complexity** as follows -

The idea is to iterate over the array and store the minimum value in the array so far and checking whether we can substract the current number to get a max_profit or not using a variable to store the maximum difference till now. This will do the problem in a *single pass linear algorithm*

Also we can run an opposite approach of storing the maximum value till now in the array and substract from that the current value and store the max_profit as done in the previous method.

So this problem could be solved in a **Linear Time and Constant Space Complexity** i.e. *O(N) in time and O(1) in space*
