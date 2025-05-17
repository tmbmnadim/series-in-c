This should help my fellow batchmates. If you copy this its on you. But if you try to understand it's for
your own good.

It's important to remember that in my solutions, I didn't use i although in some cases it could be used.
Instead everytime the loop ran, i created the term that is to be added to our "sum" variable.

Why?
To better understand the code. (Since most of us are begginers)
To increase readablity in our code. (Might not metter in such small code.)

What is a term?
In series, every object is a term. For example in the series:
1 + 2 + 3 + 5 + .... + n, 1 is a term, 2 is a term. If we take complex series:
1*2 + 2*3 + 3*4 + .... + n(n+1), Here (1*2) is a term. Yes that whole part, not just a number.

Whenever I needed to add the term to my "sum", I would calculate it first. Like:
int term = term + i; 
Here, if first term was 1, then the second one will be 2 and so forth. This way we can understand
how we are calculating the sum. And fun fact, This way we can also print our series. (The complex
one will take some more work).

Another fun fact: 
Sn = n/2 [2a + (n - 1) d] (or)
Sn = n/2 [a1 + an]
This two formula can calculate the sum of series. e

If you find any mistakes, please let me know.

Updates:
Fixed "int" size limitation using 2 ways:
1) using "long long int" or "unsigned long long int"
2) Using "double" and removing all characters after floating point.