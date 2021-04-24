//Program to Calculate Area of Equilateral Triangle

package main

import (
    "fmt"
    "math"
    )

func main() {
    var a, area float64
    
    fmt.Print("Input lenght of side: ")
    fmt.Scanln(&a)//input from user
    
    area=(math.Sqrt(3)/4)*a*a //formula to calculate area of triangle
    
    fmt.Println("Area: ", area)
}
