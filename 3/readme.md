Largest Prime Factor
===================

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Implementation Details
----------------------

Beginning at `n=2` (because 1 doesn't count as a factor), check if `x` is divisible by `n` for each `n` while `n < x`. If it is, make `x=x/n`. Once `n > x` we know we have found the last prime factor. It is important to note that when you find a factor, you have to continue rechecking that factor and redividing until it is no longer a factor. This is because a prime factor can occur multiple times.

This works because if we continue only taking the smallest factor each time we know it has to be prime since we have already removed any factors smaller (and thus any that have any chance of dividing into the current factor).
