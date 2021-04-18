//C++  Program to Calculate Area of Equilateral Triangle

#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float a, area;

    cout<<"Enter lenght of side: ";
    cin>>a;
   
    area=(sqrt(3)/4)*a*a;
    
      cout<<"\nArea of Equilateral Triangle = "<<area<<endl;
}
