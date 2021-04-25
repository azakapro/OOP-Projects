// Program to Calculate Area of Right angle Triangle

package main

import "fmt"

func main() {
    var a, b, area float64
    fmt.Println("Input the two sides(not Hypotenuse)")
    fmt.Printf("a: ")
    fmt.Scanln(&a)
    fmt.Printf("b: ")
    fmt.Scanln(&b)
    
    area=(a*b)/2
    
    fmt.Println("Area: ", area)
}
