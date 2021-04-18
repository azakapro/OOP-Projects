//C++  Program to Calculate Area and Circumference of Circle

#include<iostream>
using namespace std;

int main(){
    float r, area, circum;
    float pi=3.14;
    
    cout<<"Enter lenght of radius"<<endl;
    cin>>r;
    
    area=pi*r*r;
    circum=2*pi*r;
    
      cout<<"\nArea of Circle = "<<area<<endl;
      cout<<"Circumference of Circle = "<<circum<<endl;
}
