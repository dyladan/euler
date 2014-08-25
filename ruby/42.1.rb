def word_value (word)
  base = ?A.ord - 1
  word_arr = word.split(//)
  value = 0
  word_arr.each do |ch|
    value += ch.ord - base
  end
  value
end

def gen_triangles (max = 20)
  (1..max).map {|x| triangulate x }
end

def triangulate (x)
  y = (0.5)
  y *= x
  y *= (x + 1)
  y.to_i
end

file = File.open("../42/p042_words.txt")
line = file.gets
line.tr!('"', '')
words = line.split(",")
values = words.map { |word| word_value word }
triangles = gen_triangles 20

sum = 0
values.each do |x|
  if triangles.include? x then
    sum += 1
  end
end

puts sum
