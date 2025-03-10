//naive-find maximum sum of consecutive subarray elements
#include<iostream>

using namespace std;


int sub_array_max(int arr[], int size){
    int maximum=0;
    for(int i =0; i< size ; i++){
        int sum=0;
        for(int j=i; j< size ; j++){
            sum += arr[j];
            maximum = max(sum , maximum);
        }
    }
    return maximum;
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