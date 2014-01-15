Multiples of 3 and 5
====================

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Implementation Details
----------------------

- C/Ruby/Go2 - Step from 1 to 1000 and add anything that satisfies (i%3==0||i%5==0)
- Go1 - Step through list 3 times. Once for each multiple (+3, +5, -15)
