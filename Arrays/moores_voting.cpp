//find majority ele in array

// 2 phase arroch 

// second phase starts when nothing founds in first phase and simple go thorugh elements
// if count is < n/2 returns -1; other wise return res of first phase.

// second phase checks whether the res of first phase is majority. 

// first phase asssumes there is atleaset one major element.

#include <iostream>

using namespace std;

class Solution {
    public:
    int majority_ele(int arr[], int size){
        int res =0; int count =1;
        for( int i =1; i < size ; i ++){
            if(arr[res]==arr[i]){count++;}
            else{ count --;}
            if(count ==0){ res =i; count =1;}
        } 
        //phase 2;
        count =0;
        for( int i =0; i < size ; i ++){
            if(arr[res] == arr[i]){ count++;}
    }
    if(count<=size/2){ return -1;}
    return res;

    }
};



int main(){
    Solution s1;
    int arr[] = {10,4,5,4,5,5,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res = s1.majority_ele(arr , n);
    cout<< res ;
}


