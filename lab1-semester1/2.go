/*2	Declaring Variable and Printing its Value
(Hint: one variable of each type like: int ,float64 , complex128 , byte, rune, string).*/

package main

import (
	"fmt"
)

func main() {

var num1 int=1
var num2 float64=11.11//float64 for float numbers
var num3 complex128=0.077+0.1i//complec128 is for complex numbers
var t byte='A'//byte ali
var f rune='£'// rune used to show UNICODE characters
var x string="This is hard"

	fmt.Println(" int : ", num1)
	fmt.Println(" float64 : ", num2)
	fmt.Println(" complex128 : ", num3)
	fmt.Printf(" byte :  %c", t)//this will print character A
	fmt.Printf("\n rune :  %c", f)//this will print pound sign
	fmt.Printf("\n string : %s", x)
}
