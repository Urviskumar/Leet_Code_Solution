//check whether the array is sorted or not-decreasing order only

#include <iostream>
using namespace std;

bool sort(int array[], int size){

    if(size==1 || size==0) {return true;}
    
    for(int i=1; i<size; i++){
        if(array[i-1]>array[i]){
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    cout<<"size of the array";
    cin>>n;
    int *arr = new int [n];
    cout<<"enter the elements in array";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool sorted = sort(arr,n);
    cout<<boolalpha<<sorted;

    delete[] arr;

    return 0;

}