sum = 2
a = 1
b = 2
x = 3
while x < 4000000 do
  x = a + b
  a = b
  b = x
  if x%2==0
    sum+=x
  end
end
puts sum
