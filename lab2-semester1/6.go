//Program to Calculate Area of Square

package main

import "fmt"

func main() {
    var a, area float64
    fmt.Print("Input the side of Square. a = ")
    fmt.Scanln(&a)
    
    area=a*a
    
    fmt.Println("Area of Square = ", area)
}
