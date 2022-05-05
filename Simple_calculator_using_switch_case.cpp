#include <iostream>
using namespace std;

int main()
{
    char operation;
    float num1, num2;
    
    cout<<"Enter operator(+ ,- , *, /): ";
    cin>>operation;
    
    cout<<"Enter the two operands: ";
    cin>>num1>>num2;
    
    switch(operation){
        case '+' :
            cout<<num1<<" + "<<num2<<" = "<<num1+num2;
            break;
        case '-' :
            cout<<num1<<" - "<<num2<<" = "<<num1-num2;
            break;
        case '*' :
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/' :
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        default:
            cout<<"Error! Operator is not correct.";
            break;
    }
    return 0;
}
