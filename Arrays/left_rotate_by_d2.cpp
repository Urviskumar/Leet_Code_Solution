//2-left rotate the element by d factor , assume d<=size of the array
//second optimal 
#include <iostream>

using namespace std;

void rotate( int a[], int size, int d){
    d = d % size; // 3 mod 5 = 3 , 6 mod 5 = 1
    int temp[d];
    for(int i =0 ; i<d; i ++){
        temp[i]= a[i];
    }
    for( int i = d; i < size; i ++){
        a[i-d] = a[i];
    }

    for( int i = 0 ; i < d ; i++){
        a[size-d+i] = temp[i];
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

/*
Cyclic Nature of Rotation:

Rotating an array by n positions brings it back to its original state.

Example: For an array [1, 2, 3, 4, 5] (size n = 5):

Rotating by k = 5 → Result: [1, 2, 3, 4, 5] (same as original).

Rotating by k = 6 → Equivalent to rotating by 1 (since 6 % 5 = 1).

Avoid Redundant Work:

If k > n, rotating by k positions is equivalent to rotating by k%n. This reduces the number of rotations needed, saving time and resources.
*/