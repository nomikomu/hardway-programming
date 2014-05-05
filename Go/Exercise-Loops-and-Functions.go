package main

import (
	"fmt"
	"math"
)

// Searching Sqrt - Newton's method
func Sqrt(x float64) float64 {
	guess := x
	for i := 0; i < 10; i++ {
		guess -= (math.Pow(guess, 2) - 2) / (2.0 * guess)
	}
	return guess
}

// Difference between math.Sqrt and Sqrt
func SqrtDiff(x, y float64) float64 {
	diff := float64(math.Sqrt(x)) - y
	if diff < 0 {
		diff = -diff
	}
	return diff
}

func main() {
	fmt.Println(Sqrt(2))
	fmt.Println(math.Sqrt(2))
	fmt.Println(float64(math.Sqrt(2)) - Sqrt(2))
	fmt.Println(SqrtDiff(2, Sqrt(2)))
}
