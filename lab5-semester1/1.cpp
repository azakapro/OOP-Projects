// Write a program to calculate pow(x,n) i.e. to calculate xn .

#include <iostream>

using namespace std;

int main()
{   int num=1;//initial dec
    int base=2;//base
    int expon=4;//degree
    
    for (int i=1;i<=expon;i++){
        num=num*base;
        /*
        if 1: 1=1*2
        if 2: 2=2*2
        if 3: 4=4*2
        if 4: 8=8*2
        if 5: 16=16*2 ...
        */
    }
    cout<<num<<endl;

    return 0;
}
