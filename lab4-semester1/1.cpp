// C++ Program to calculate sum of numbers from m to n

#include <iostream>

using namespace std;

int main()
{
    int m, n, res=0;
    cout<<"Input integer which you want to start adding from: ";
    cin>>m;//from m
    
    cout<<"Input  integer which  you want to  calculate till: ";
    cin>>n;//till n
    
    for (int i=m; i<=n; i++) {
        res=res+i;
    }
    //there it starts from i(which is i=m) and ends on n(which is i<=n).
    //res adds numbers and save sum on res again
    //i++ increments same thing until it reaches n
    
    cout<<"\n Sum = "<<res<<endl;

    return 0;
}
