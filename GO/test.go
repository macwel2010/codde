package main

import "fmt"

type reader interface {
	read(string)
}

type book struct {
	author    string
	title     string
	publisher string
}

func (b *book) read(s string) {
	fmt.Println(s)
}

type record struct {
	album  string
	year   int
	artist string
}

func (r *record) read(s string) {
	fmt.Println(s)
}

func main() {
}
