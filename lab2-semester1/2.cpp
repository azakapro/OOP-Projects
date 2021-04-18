//C++  Program to Calculate Area of Scalene Triangle

#include<iostream>
using namespace std;

int main(){
    float b, h, area;

    cout<<"Enter lenght of base: ";
    cin>>b;
    
    cout<<"Enter lenght of height: ";
    cin>>h;
    
    area=(h*b)/2;
    
      cout<<"\nArea of Scalene Triangle = "<<area<<endl;
}
