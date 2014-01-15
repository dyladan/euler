package main

import "fmt"

func main() {
	var test bool = false
	var i, j int
	for i = 20; !test; i+=20 {
		test = true
		for j = 19; j > 2; j-- {
			if i % j != 0 {
				test = false
				continue
			}
		}
	}
	i -= 20
	fmt.Println(i)
}
