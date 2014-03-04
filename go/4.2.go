package	main

import "strconv"
import "fmt"

func main() {
	large := 0
	out := make(chan int, 999*999)
	for i := 500; i < 1000; i++ {
		go mult(i, out)
	}
	for i := 500; i < 1000; i++ {
		temp := <- out
		if temp > large{
		large = temp
		}
	}
	fmt.Println(large)
}
func mult(i int, out chan int) {
	large := 0
	for j := i; j < 1000; j++ {
		product := i * j
		if isPalindrome(product) {
			if product > large {
				large = product
			}
		}
	}
	out <- large
}
func isPalindrome(n int) bool{
	str := strconv.Itoa(n)
	rev := reverseStr(str)
	return (str == rev)
}

func reverseStr(str string) string {
	runes := []rune(str)
	for i, j := 0, len(runes)-1; i < j; i, j = i + 1, j - 1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}