//left rotate the elements by one - counter clock wise

#include <iostream>

using namespace std;

void rotate( int a[], int size){

    int temp = a[0];

    for( int i =1; i<size ; i++){
        a[i-1] = a[i];
    }
    a[size-1] = temp;
}

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;

    int *arr = new int [n];

    for(int i =0 ; i <n ; i ++){
        cout<<"enter the elements"<<" ";
        cin>>arr[i];
    }

    rotate(arr , n);

    for(int i =0 ; i <n ; i ++){
        cout<<arr[i]<<" ";
    }
}