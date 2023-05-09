#                                               STOCK TRADING (EASY VERSION)
###                                           Time limit per test - 2 s
###                                           Memory limit per test - 256 megabytes
###                                           Input - standard input
###                                           Output - standard output

*The only difference between the easy and the harder version of the problem is the trading limit constraints which is set to 1 pair for this problem but otherwise any number is allowed for the next problem. See the constraints section for more clarity.*

Mahesh is a stock trader and loves doing intra day trading. He is watching a stock and writes the price of the stock at regular intervals in an array whose size in given to be n. After the day is over he analyses how much maximum profit he could have earned from the intra day trading in that stock.
Following are the rules for stock trading in his exchange - 
 - Shares would be bought only at the discrete intervals in which he has written the price.
 - As Mahesh is a new trader he does not want to keep more than 1 stock with him at any point of time.
 - At the end of the day Mahesh is required to sell any stock he has so the day ends with no stock in his hand.
 - He starts with zero stocks.
As Mahesh is a newbie in trading he would like you to help him with the problem. You are required to find the maximum profit he would have earned from that stock.

### INPUT CONSTRAINTS :
 - For this question we would assume that he only trades for a maximum of 2 times in the stock.
 - The prices noted down by him are always non negative integers.
Remember that one trade is defined as one pair of sale and purchase operation in a stock.

### INPUT : 
First line of input contains the total number of test cases (0 < t <= 1000)
Each test case contains of two lines , first having a positive integer n (0 < n <= 10<sup>5</sup>) which signifies the number of times the price of the share was noted.
Next line contains n space seperated integers 0 <= a<sub>i</sub> <= 500 for each 1 <= i < n denoting the i<sup>th</sup> observation. 
### OUTPUT :
You have to output the maximum possible profit that Mahesh would have possibly got. If no profit is possible then output -1.

### EXAMPLE TEST CASES :
#####  TEST CASE - 1

Input
```
2
2
3 7
7
45 24 35 31 40 38 11
```

Output
```
4
16
```

##### EXPLANATION OF TEST CASE -
In case - 1 for test case - 1   Just buy the share for 3 and sell for 7 which is the only possibility.
In case - 2 for test case - 1   Buy the stock for 24 and sell for 40 which gives you a maximum profit of 16.
