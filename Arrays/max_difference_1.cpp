//time-theta(n^2)
#include <iostream>

using namespace std;

int max_diff(int arr[], int size){
    int max=0;
    int temp=0;
    for(int i = 0; i<size; i++){
        for(int j = i+1 ; j<size; j++){
        temp = arr[j]-arr[i];
        if(temp>max){
            max=temp;
        }
    }
}
    return max;
}


int main(){

    int n;
    int *arr = new int[n];
    cout<<"enter the size of the array";
    cin>>n;
    for ( int i =0; i<n; i++){
        cin>>arr[i];
    }

    int max = max_diff(arr , n);
    cout<<max;
}