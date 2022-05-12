#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    
    int ans=0;
    int i=0;
    while (n!=0){
    int digit= n% 10;
    ans=(digit*pow(2,i))+ans;
    
    n=n/10;
    i++;

    }

    cout<<"Decimal representation of this number is : "<<ans<<endl;

    return 0;
}
