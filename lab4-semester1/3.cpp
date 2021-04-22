// C++ Program to input a number and then calculate sum of its digits.

#include <iostream>

using namespace std;

int main()
{
    int num, sum=0, rem;//rem is reainder
    cout<<"Input number: ";
    cin>>num;
    
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    
    cout<<"Sum of digits: "<<sum<<endl;


    return 0;
}
