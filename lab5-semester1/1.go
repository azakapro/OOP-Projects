package main

import (
	"fmt"
)

func main() {
	num := 1  //initial num dec
	base := 2 //base
	exp := 5  //degree
	for i := 1; i <= exp; i++ {
		num = num * base
		/*
		   if 1: 1=1*2
		   if 2: 2=2*2
		   if 3: 4=4*2
		   if 4: 8=8*2
		   if 5: 16=16*2 ...
		*/
	}
	fmt.Println(num)
}
