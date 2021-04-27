//Program to Calculate Area of Rectangle

package main

import "fmt"

func main() {
    var w, l, area float64
    fmt.Print("Input the width of rectangle. a = ")
    fmt.Scanln(&w)
    
    fmt.Print("Input the length of rectangle. a = ")
    fmt.Scanln(&l)
    
    area=w*l
    
    fmt.Println("Area of Rectangle = ", area)
}
