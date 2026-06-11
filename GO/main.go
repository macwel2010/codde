package main

import (
	"fmt"
	"time"
)

func main() {
	fmt.Println("starting...", time.Now())
	for i := 0; i < 5; i++ {
		go sleepygopher(i)

	}
	time.Sleep(2 * time.Second)
	fmt.Println("Exiting...", time.Now())

}

func sleepygopher(id int) {
	time.Sleep(1 * time.Second)
	fmt.Println("...", id, "snore...", time.Now())
}
