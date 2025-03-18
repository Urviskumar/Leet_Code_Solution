//find out maximum length of even-odd into subarray 

#include<iostream>

using namespace std;

int even_odd(int arr[], int size){
    int result =1;
    for( int i=0; i < size; i++){
        int count=1;
        for( int j = i+1 ; j< size ; j++){
            if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j]%2!=0 && arr[j-1]%2==0) { count++;}
            else{break;}
        }
            result = max(count, result);
    }
    return result;

}

int main(){
    int arr[] = {0,2,3,3,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res = even_odd(arr , n);
    cout<< res ;
}