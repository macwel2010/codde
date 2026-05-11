package main

import "fmt"

type stack struct {
	val int
}

func main() {

	var n int
	fmt.Println("How many numbers do you want in the slice?")
	fmt.Scan(&n)
	push(n)

}

func push(n int) {

	var slic []int
	var num int
	for i := 1; i <= n; i++ {
		fmt.Printf("Enter the %d number to append : ", i)
		fmt.Scan(&num)
		slic = append(slic, num)
	}

	fmt.Println(slic)
}
