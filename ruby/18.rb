if (!ARGV[0])
    puts "command line argument must be a valid file"
    exit 1
end
f = File.open(ARGV[0] ||= "")
a = f.readlines.collect{|i| i.split.collect{|j| j.to_i}}

(1..a.length-1).reverse_each do |i|
    (0..i-1).each do |j|
        if (a[i][j]>a[i][j+1])
            a[i-1][j] += a[i][j]
        else
            a[i-1][j] += a[i][j+1]
        end
    end
end

puts a[0][0]
