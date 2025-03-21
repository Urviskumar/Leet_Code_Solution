//find mojority element in array -> more than n/2 times , output needs to be index value
#include <iostream>

using namespace std;

class Solution{

    public:

    int majority_ele( int arr[], int size){
        for( int i =0; i < size ; i ++){
            int count =1;
            for( int j = i+1; j < size ; j++){
                if ( arr[i]==arr[j]){
                    count ++;
                }
            if( count > size/2){
                return i;
            }
            }
        }
        return -1;
    }
};


int main(){
    Solution s1;
    int arr[] = {10,4,5,4,5,5,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res = s1.majority_ele(arr , n);
    cout<< res ;
}