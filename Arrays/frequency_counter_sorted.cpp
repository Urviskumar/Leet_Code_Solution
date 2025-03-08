//sorted array, frequency counter 
#include<iostream>

using namespace std;

void freq_count(int arr[], int size){
    int count =1;
    int i=1;
    if(size ==1){cout<<arr[0]<<" "<<1;}
    while(i<size){
        while(i<size && arr[i]==arr[i-1]){
            count++;
            i++;
        }
        cout<<arr[i-1]<<" "<<count<<" ";
        count =1;
        i++;

       if(i<size && (size == 1 || arr[i]!=arr[i-1])){
          cout<<arr[i-1]<<" "<<1<<" ";
        }
    }
}

int main(){

    int n;
    int *arr = new int[n];
    cout<<"enter the size of the array";
    cin>>n;
    for ( int i =0; i<n; i++){
        cin>>arr[i];
    }

    freq_count(arr , n);
}