//reverse the array

#include <iostream>

using namespace std;

void reveresed( int array[] , int size){
    int temp;
    int low_index=0, high_index=size -1 ;
        while(low_index<high_index){

            temp = array[low_index];
            array[low_index] = array[high_index];
            array[high_index] = temp;
            low_index ++;
            high_index --;
        }
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

    reveresed(arr , n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;

}