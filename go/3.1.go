package main
import "fmt"

func main(){
  i := 600851475143
  fmt.Println(bprime(i))

}

func bprime(n int) int {
  for i := 2 ; i < n ; i++ {
    if n%i == 0 {
      n /= i
      i--
    }
  }
  return n
}
