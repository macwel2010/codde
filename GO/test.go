package main

import (
	"fmt"
	"net/http"
)

type user struct {
	firstname string
	lastname  string
	username  string
	password  string
}

func main() {

	err := http.ListenAndServe(":15000", nil)
	if err != nil {
		fmt.Println("failed to load.")
	}
	fmt.Println("This is port 15000.")

}
