package	main

import "strconv"
import "fmt"

func main() {
	large := 0
	for i := 100; i < 999; i++ {
		for j := 100; j < 999; j++ {
			product := i * j
			if isPalindrome(product) {
				if product > large {
					large = product
				}
			}
		}
	}
	fmt.Println(large)
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