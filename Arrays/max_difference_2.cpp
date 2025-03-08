//time-theta(n)
#include <iostream>

using namespace std;

int max_diff(int arr[], int size){
    int max=0;
    int temp=0;
    int min=arr[0];
        for(int j = 1 ; j<size; j++){
             temp = arr[j]-min;
              if(temp>max){
                  max=temp;
        }
               if(arr[j]<min){
                  min=arr[j];
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