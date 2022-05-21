#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    cout<<"Printing the reversed array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Printing the array : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    reverseArray(arr, size);
    printArray(arr, size);
    
   
    return 0;
}

