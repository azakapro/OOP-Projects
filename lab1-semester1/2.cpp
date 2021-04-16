/*2	Declaring Variable and Printing its Value
(Hint: one variable of each type like: int ,float ,double ,char).*/

#include<iostream>
using namespace std;

int main(){
    int num1=1; //int takes 4 bytes for storage
    float num2=1.1; //float takes 4 bytes for storage
    double num3=1.2; //double takes 8 bytes for storage
    char grade ='A'; //char takes 1 bytes for storage
    
    cout<<" int : "<<num1<<endl;
    cout<<" float : "<<num2<<endl;
    cout<<" double : "<<num3<<endl;
    cout<<" char : "<<grade<<endl;
    
    system("pause");
    return 0;
}
