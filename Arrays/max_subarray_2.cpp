//2find maximum sum of consecutive subarray elements
#include<iostream>

using namespace std;

int sub_array_max(int arr[], int size){
    int maxendings[size];
    int result=arr[0];
    maxendings[0]= arr[0];
    for( int i =1; i<size; i++){
        maxendings[i] = max(maxendings[i-1]+arr[i], arr[i]);  
        result = max(maxendings[i], result);
    }
    return result;
}

int main(){

    int n;
    int *arr = new int[n];
    cout<<"enter the size of the array";
    cin>>n;
    for ( int i =0; i<n; i++){
        cin>>arr[i];
    }
    int res = sub_array_max(arr , n);

    cout<< res ;
}