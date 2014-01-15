Smallest Multiple
=================

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Implementation Details
----------------------

Beginning at 20 start counting up by twenty and checking for divisibility for each number 2 to 19.

Go backwards from 19 to 2 to increase chance of breaking the inner loop earlier (speed optimization)
