//C++ Program to Calculate Area of Right angle Triangle

#include <iostream>

using namespace std;

int main()
{
  float a, b, area;
  
    cout<<"Input the two sides(not base): "<<endl;
    cin>>a;
    cin>>b;
    
    area=(a*b)/2;
    
    cout<<"Area of Right angle Triangle = "<<area<<endl;

    system("pause");
    return 0;
}
