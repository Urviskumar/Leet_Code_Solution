//find out maximum length of even-odd into subarray _ optimal - similar to kadane

#include<iostream>

using namespace std;

int even_odd(int arr[], int size){
    int result =1;
    int count=1;
    for( int i=1; i < size; i++){
            if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2!=0 && arr[i-1]%2==0) { 
                count++;
                result = max(count, result);
            }
            else{count = 1;}
        }
    return result;

}

int main(){
    int arr[] = {0,2,3,3,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res = even_odd(arr , n);
    cout<< res ;
}