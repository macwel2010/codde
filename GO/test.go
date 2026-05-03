package main

import "fmt"


func main(){
	var x [3]int
	fmt.Print("Enter first number : ")
	fmt.Scan(&x)
	fmt.Printf("The value of x is : %d",x)
}