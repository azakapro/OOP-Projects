// C++  Program to find that entered year is leap year or no

#include <iostream>

using namespace std;

int main()
{
   //1. Leap year should be divisible by 4
   //2. Leap year should not be divisible by 100
   //3. Leap year should be divisible by 400
   int year;
   
    cout<<"Enter year you want to check: "<<endl;
    cin>>year;
    
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
cout<<"\n"<<year<<" is a leap year";
else
cout<<"\n"<<year<<" is not a leap year";
    
    
    system("pause");
    return 0;
}
