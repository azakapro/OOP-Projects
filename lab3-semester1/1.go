//Program to convert Temprature from degree Centigrade into Fahrenheit

package main

import "fmt"

func main() {
    var cen, fahr float64
    fmt.Print("Input Temprature in Centigrade: ")
    fmt.Scanln(&cen)
    
    fahr=(1.8*cen)+32.0
    //formula to convert from Cen. to Fahr.
    
    //also you can use formula to convert from Fahrenheit to Centigrade
    //cen = (fahr - 32) / 1.8
    
    fmt.Println("Result: ", fahr, "degree in Fahrenheit")
 }
