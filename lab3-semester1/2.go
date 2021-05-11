//Program to show swap of two integers without using third variable

package main

import "fmt"

func main() {
    var x, y int
    fmt.Println("Enter any two integers : ")
    fmt.Print("x = ")
    fmt.Scanf("%d", &x)
    fmt.Print("y = ")
    fmt.Scanf("%d", &y)
    
    x=x*y
    y=x/y
    x=x/y
    fmt.Println(" Result : ")
    fmt.Printf("x = %v\n", x)
    fmt.Printf("y = %v", y)
}
