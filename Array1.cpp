#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int first[10];
    cout<<"Value of 8th index is "<<first[8]<<endl;
    cout<<"Value of 5th index is "<<first[5]<<endl;
    printArray(first, 10);
    int firstSize= sizeof(first)/sizeof(int);
    cout<<"Size of first is: "<<firstSize<<endl;
    cout<<endl;
    
    
    int second[3]={5,7,11};
    cout<<"Value of 2nd index of second is "<<second[2]<<endl;
    printArray(second, 3);
    int secondSize= sizeof(second)/sizeof(int);
    cout<<"Size of second is: "<<secondSize<<endl;
    cout<<endl;

    
    int third[15]={2,7};
    int n=15;
    printArray(third, 15);
    int thirdSize= sizeof(third)/sizeof(int);
    cout<<"Size of third is: "<<thirdSize<<endl;
    cout<<endl;


    int fourth[10]={0};
    n=10;
    printArray(fourth, 10);
    int fourthSize= sizeof(fourth)/sizeof(int);
    cout<<"Size of fourth is: "<<fourthSize<<endl;
    cout<<endl;
    
    
    int fifth[5]={1,2,3,4,5};
    n=5;
    printArray(fifth, 5);
    int fifthSize= sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth is: "<<fifthSize<<endl;
    cout<<endl;
    
    //character type array
    char ch[5]={'a', 'b', 'c', 'd', 'e'};
    cout<<"Printing the ch array : ";
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }cout<<endl;
    int chSize= sizeof(ch)/sizeof(char);
    cout<<"Size of ch is: "<<chSize<<endl;
    cout<<endl;

    return 0;
}
