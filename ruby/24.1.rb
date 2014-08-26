require("./lib/factorial")

def nth_lex(n, str)
  result = []
  arr = str.split(//)
  i = arr.length
  if n > i.factorial then
    abort("Not enough permutations")
  end
  while i > 0 do
    i -= 1
    temp = n / i.factorial
    n = n - (temp * i.factorial)
    if n == 0 then
      if i >= 0 then
        temp -= 1
        n += i.factorial
      end
    end

    result.push(arr[temp])
    arr.delete(arr[temp])
  end

  return result.join()
end

start_time = Time.now
result = nth_lex(1000000, "0123456789")
time = Time.now - start_time

puts "Result is #{result} calculated in #{time} seconds"
