def is_palindrome? str
  str == str.reverse
end
arr = []

(1..1000000).each do |x|
  if is_palindrome? x.to_s and is_palindrome? x.to_s(base=2) then
    arr.push x
  end
end

puts arr.inject(:+)
