sum = 0
(1..999).each do |x|
  if x % 3 == 0 || x % 5 == 0
    sum += x
  end
end

puts sum
