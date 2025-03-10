//count max number of consecutive 1's in binary array.

#include<iostream>

using namespace std;
int consecutive(int arr[], int size){
    
    int count =0;
    int result =0;
    for( int i =0; i< size ; i++){
        if(arr[i]==0){
            count =0;
        }

        else{
            count ++;
            result = max( result , count);
        }

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
    int res = consecutive(arr , n);

    cout<< res ;
}