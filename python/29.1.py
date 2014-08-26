a = set()
for x in xrange(2, 101):
    for y in xrange(2, 101):
        a.add(x**y)

print(len(a))
