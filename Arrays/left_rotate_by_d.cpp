//left rotate the element by d factor , assume d<=size of the array
//naive
//THETA(n*d)
//space theta(1)
#include <iostream>

using namespace std;

void rotate( int a[], int size, int d){

    for(int i =0 ; i<d ; i++){

    int temp = a[0];

    for( int i =1; i<size ; i++){
        a[i-1] = a[i];
    }
    a[size-1] = temp;
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
    int factor;
    cin>>factor;
    rotate(arr , n, factor);

    for(int i =0 ; i <n ; i ++){
        cout<<arr[i]<<" ";
    }
}

