//Remove duplicate from the array and return the output size

#include <iostream>

using namespace std;

int duplicate_remove(int array[], int size){
    int result = 1;
    for( int i = 1; i < size ; i++){
        if( array[i] != array[result -1]){
        array[result] = array[i]; // for array[0] it will remain the same , starting from second element
        //and replace that index with distinct element
        result++;
    }
    }
    return result; 
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
    int res = duplicate_remove(arr, n);
    cout<<res;

}
