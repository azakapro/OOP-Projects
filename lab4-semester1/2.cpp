//C++ Program to print Fibonacci series up to 100. 

#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c,i;
    
    for(i=1; i<=10; i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }

    return 0;
}
