// C++  Program to find whether given number is even or odd 

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   
   int num;
   
    cout<<"Enter any positive integer you want to check: "<<endl;
    cin>>num;
    
    if(num<0){
         cout<<"\n"<<num<<" is not a positive integer"<<endl;
    }
    else if(num%2==0){
        cout<<"\n"<<num<<" is an even number"<<endl;
    }
    else if(num%2==1){
        cout<<"\n"<<num<<" is an odd number"<<endl;
    }
    else{
         cout<<"\n"<<num<<" is not a povitive integer"<<endl;
    }
    
    system("pause");
    return 0;
}
