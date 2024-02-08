#include <iostream>
using namespace std;
//adding two numbers
int main()
{
    int first_number, second_number, Sum;
    
    cout<<"Enter two integers: ";
    cin>> first_number >> second_number;
    
    Sum= first_number + second_number;
    
    cout<<first_number<<" + "<<second_number<<" = "<<Sum;
    return 0;
}
