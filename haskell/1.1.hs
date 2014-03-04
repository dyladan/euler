x = sum [y | y <- [1..999], y `mod` 3 == 0 || y `mod` 5 == 0]
main = do
  putStrLn . show $ x

