// C++ Program to display sum of series 1+1/2+1/3+……….+1/n. 

#include <iostream>

using namespace std;

int main()
{
    float i, n, sum=0;
    
    cout<<"Program : '1+1/2+1/3+1/4+....1/n'"<<endl;
    
    cout<<"Enter n : ";
    cin>>n;
    for (i=1; i<=n; i++){
        sum=sum+1/i;
    }
    
    cout<<"\nResult : "<<sum;
    return 0;
}
