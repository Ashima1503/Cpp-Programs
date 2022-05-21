#include <iostream>
using namespace std;

void updateArray(int arr[],int n){
    arr[0]=120;
    
    cout<<"Printing the array after updation: "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[3]= {1,2,3};
    cout<<"Printing the array before updation: "<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    updateArray(arr,3);

    return 0;
}

