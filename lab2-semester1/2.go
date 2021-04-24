//Program to Calculate Area of Scalene Triangle

package main

import "fmt"

func main() {
    var b, h, area float64
    
    fmt.Print("Input lenght of base: ")
    fmt.Scanln(&b)//input from user
    
    fmt.Print("Input lenght of height: ")
    fmt.Scanln(&h)//input from user
    
    area=(h*b)/2 //formula to calculate area of triangle
    
    fmt.Println("Area: ", area)
}
