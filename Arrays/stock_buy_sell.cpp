//stock buy and sell and get maximum profit

#include<iostream>

using namespace std;

void profit(int arr[], int size){
    int sum_profit = 0;
    for(int i =1; i< size ; i++){
        if( arr[i]> arr[i-1]){
            sum_profit += arr[i]-arr[i-1];
        }
    }

    cout<<sum_profit;
}



int main(){

    int n;
    int *arr = new int[n];
    cout<<"enter the size of the array";
    cin>>n;
    for ( int i =0; i<n; i++){
        cin>>arr[i];
    }
    profit(arr , n);
}