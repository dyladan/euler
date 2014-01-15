package main

import "fmt"


func main() {
	out := make(chan int)
	go sumSquare(out)
	go squareSum(out)
	ans := <- out - <-out
	if ans < 0 {
		ans = -ans
	}
	fmt.Println(ans)
}

func sumSquare(out chan int){
	sum := 0
	for i := 1; i <= 100; i++ {
		sum += i * i
	}
	out <- sum
}

func squareSum(out chan int){
	sum := 0
	for i := 1; i <= 100; i++ {
		sum += i
	}
	out <- sum * sum
}