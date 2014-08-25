import math
from datetime import datetime

def divisors_sum(a):
    if a == 1:
        return(0)
    if a == 2:
        return(1)
    divs = [1]
    for x in range(2, 1 + math.ceil(math.sqrt(a))):
        if a % x == 0:
            divs.append(x)
            divs.append(round(a/x))
    divs = list(set(divs))
    return(sum(divs))

def generate_abundant():
    nums = list()
    for x in range (1, 28123):
        y = divisors_sum(x)
        if x < y:
            nums.append(x)

    return(nums)

def check(num, nums):
    for x in nums:
        y = num - x
        if y < 0:
            return False
        if y in nums:
            return True
    return False

nums = set(generate_abundant())

start = datetime.utcnow()

total = 0
for x in range(1, 28123):
    if not check(x, nums):
        total = total + x

elapsed = datetime.utcnow() - start

print(total)
print(elapsed.total_seconds())

