// C++ Program to show swap of two no’s without using third variable

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Enter any two numbers: "<<endl;
    
    cout<<"x = ";
    cin>>x;//takes input for x
    
    cout<<"y = ";
    cin>>y;//takes input for y
    
    //formula
    x=x*y;//first we will multiply two numbers 
    y=x/y;//this gives x*y/y=x
    x=x/y;//this gives x*y/x(look at the last equation)=system
    
    cout<<"Result: "<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    
    system("pause");
    return 0;
}
