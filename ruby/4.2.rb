large = 0
(100..999).each do |t|
  (t..999).each do |v|
    product = t*v
    str = product.to_s
    rev = product.to_s.reverse
    if(str == rev)
      if(product > large)
        large = product
      end
    end
  end
end

puts large
