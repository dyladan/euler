a,b = 0,1
x = 0
while b < 4000000:
  if (b%2 == 0):
    x = x + b
  a,b = b, a+b

print(x)
