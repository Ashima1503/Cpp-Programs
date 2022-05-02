#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cin>>a;
    cin>>b;
    cout<<"Before swapping: ";
    cout<<"a = "<<a<< " b = "<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;
    
    cout<<"After swapping: "<<endl;
    cout<<"a = "<<a<< " b = "<<b<<endl;
    return 0;
}
