// C++  Program to find greatest among 3 numbers

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout<<"Enter any three numbers: "<<endl;
    
    cout<<"num1 = ";
    cin>>num1;//takes input for num1
    
    cout<<"num2 = ";
    cin>>num2;//takes input for num2
    
    cout<<"num3 = ";
    cin>>num3;//takes input for num3
    
    if (num1>num2 & num1>num3){
        cout<<"\n num1 is greatest"<<endl;
    }
    else if (num2>num1 & num2>num3){
        cout<<"\n num2 is greatest"<<endl;
    }
    else if (num3>num1 & num3>num2){
        cout<<"\n num3 is greatest"<<endl;
    }
    else{
        cout<<"\nPlease enter three different values"<<endl;
    }
    
    
    system("pause");
    return 0;
}
