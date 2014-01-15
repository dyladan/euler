package main

import "fmt"
import "math"

func main() {
	var i, count int
	for i, count = 1, 0; count <= 10001; {
		if isPrime(i) {
			count++
		}
		i++
	}
	i--

	fmt.Println(i)
}

func isPrime(n int) bool {
    if n == 1 || n == 2 {
        return true
    }

    if math.Mod(float64(n), 2) == 0 {
        return false
    }

    for i := 3.0; i <= math.Floor(math.Sqrt(float64(n))); i += 2.0 {
        if math.Mod(float64(n), i) == 0 {
            return false
        }
    }

    return true
}
