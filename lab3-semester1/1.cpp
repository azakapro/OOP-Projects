// C++ Program to convert Temprature from degree Centigrade into Fahrenheit
#include <iostream>

using namespace std;

int main()
{
    float cen, fahr;
    cout<<"Input temprature in Centigrade: ";
    cin>>cen;//takes input
    
     //formula to convert Centigrade to Fahrenheit
    fahr = (1.8 * cen) + 32.0;
    
    //formula to convert Fahrenheit to Centigrade
    //cen = (fahr - 32) / 1.8; 
    
    cout<<"Result: "<<fahr<<" degree in Fahrenheit"<<endl;
    
    system("pause");
    return 0;
}
