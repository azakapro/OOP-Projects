/*3.       Write a program that can take input from user and print it*/

package main
  
import "fmt"
  
func main() {
  
    fmt.Println("Enter Your First Name: ")

    // var then variable name then variable type
    var first string
    // Taking input from user
    fmt.Scanln(&first)

    fmt.Println("Enter Your Last Name: ")
    var second string
    fmt.Scanln(&second)

fmt.Println("Enter Your ID: ")
    var id string
    fmt.Scanln(&id)
  
    // Print function is used to
    // display output in the same line
    fmt.Print("Your Full Name is: ", first + " " + second+" "+id)
 
}
