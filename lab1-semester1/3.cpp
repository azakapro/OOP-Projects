/*3.       Write a program to demonstrate the use of cin and cout statements.
(Hint: take input from user.)*/

#include<iostream>
using namespace std;

int main(){
    string fullName;
    string id;
    cout<<"Input your full name : ";
    getline (cin, fullName);//this gets both name and surname in a time
    
    cout<<"Input your id : ";
    cin>>id;
    
    cout<<"\n Your name is : "<<fullName<<endl;
    cout<<"\n Your id is : "<<id<<endl;
    
    system("pause");
    return 0;
}

