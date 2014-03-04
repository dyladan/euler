Largest Palindrome Product
==========================

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009 = 91 * 99`.

Find the largest palindrome made from the product of two 3-digit numbers.

Implementation Details
----------------------

The simple solution is to put 2 for loops inside each other that goes through every 3 digit number pair and multiplies them, tests if the product is a palindrome, and saves the largest one. This implementation can be optimized by only checking the numbers in the second loop that are greater than or equal to the numbers in the first loop. This stops us from checking many pairs twice.
