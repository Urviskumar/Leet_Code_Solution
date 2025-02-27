//move all zero from the array to the end

#include <iostream>

using namespace std;

void move_zero(int a[], int size){
   int result = 0;
    for( int i =0; i<size ; i++){
        if(a[i]!=0){
            a[result] = a[i];
            result++;
        }
    }
    for(int i = result ; i<size ; i++){
        a[i] =0 ;
    }
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

    move_zero(arr , n);

    for(int i =0 ; i <n ; i ++){
        cout<<arr[i]<<" ";
    }
}