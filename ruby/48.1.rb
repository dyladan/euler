sum = 0
(1..1000).each do |x|
  sum += x**x
end

puts sum.to_s[-10..-1]
