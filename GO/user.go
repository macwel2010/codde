package main

import "fmt"

func printuser(u *user) {
	fmt.Println(u)
}

func newuser(u *user) {
	fmt.Println("enter firstname : ")
	fmt.Scan(&u.firstname)
	fmt.Println("enter lastname : ")
	fmt.Scan(&u.lastname)
	fmt.Println("Enter usename : ")
	fmt.Scan(&u.username)
	fmt.Println("Enter password : ")
	fmt.Scan(&u.password)
}
