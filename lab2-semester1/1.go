// Program to Calculate Area and Circumference of Circle

package main

import "fmt"

func main() {
    var r, area, circum float64
    const pi float64 = 3.14
    
    fmt.Print("Input lenght of radius: ")
    fmt.Scanln(&r)//input from user
    area=pi*r*r //formula to calculate area of circle
    circum=2*pi*r // formula for Circumference
    fmt.Println("Area: ", area)
    fmt.Println("Circumference: ", circum)
}
