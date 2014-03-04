file = File.open("../22/names.txt")
line = file.gets
line.tr!('"', '')
names = line.split(",")
names.sort!
counter = 1
sum = 0
alphabet = ('A'..'Z').to_a
while (counter <= names.length)
	name = names[counter-1]
	arr = name.split(//)
	value = 0
	arr.each do |ch|
		value += (alphabet.index(ch) + 1) * counter
	end
	sum += value
	counter += 1
end
puts sum
