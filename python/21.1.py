import math

def divisors(a):
    divs = [1]
    for x in range(2, 1 + math.ceil(math.sqrt(a))):
        if a % x == 0:
            divs.append(x)
            divs.append(round(a/x))
    return(sorted(divs))


def amicable(a, b):
    if a == b:
        return(False)
    x = sum(divisors(a))
    y = sum(divisors(b))
    return(x == b and y == a)


sums = list()
for x in range(0, 10000):
    sums.append(sum(divisors(x)))

amicables = list()
for x in range(0, 10000):
    y = sums[x]
    if amicable(x, y) and set([x,y]) not in amicables:
        amicables.append(set([x,y]))


print(amicables)
last = list()
for x in amicables:
    for y in x:
        last.append(y)

print(sorted(last))
print(sum(last))
