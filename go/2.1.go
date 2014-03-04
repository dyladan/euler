package main

import "fmt"

func main() {
  sum := 2
  a := 1
  b := 2
  for i := 3; i < 4000000; {
    i = a + b
    a = b
    b = i
    if i % 2 == 0 {
      sum += i
    }
  }

  fmt.Println(sum)
}
