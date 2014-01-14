package main

import "fmt"

func main() {
  add := make(chan int,2)
  sub := make(chan int,1)
  go sumx(1000, 3, add)
  go sumx(1000, 5, add)
  go sumx(1000, 15, sub)
  sum := <- add
  sum += <- add
  sum -= <- sub
  fmt.Println(sum)
}

func sumx(max int, step int, add chan int) {
  sum := 0
  for i := 0; i < max; i += step {
    if i % step == 0 {
      sum = sum + i
    }
  }
  add <- sum


}
