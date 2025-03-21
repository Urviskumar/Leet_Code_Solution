//2-find maximum sum of consecutive subarray elements-kadane's algorithm
#include<iostream>

using namespace std;

class Solution{

public:

int kadane(int a[], int s){

    int current_max =0;
    int global_max = a[0];
    for ( int i =0; i< s ; i ++){ 
        current_max = max( a[i] + current_max , a[i] );
        global_max = max(current_max, global_max);
    }

    return global_max;
}

int circular_sub_max(int arr[], int size ){// trying to find the global min and subtract from the total sum = global max with circular
        int global_max_normal_sub = kadane(arr , size);
        int global_min = arr[0];
        int current_min = arr[0];
        int sum =0;
        int global_max_circular_sub = 0;
        if( global_max_normal_sub < 0){
            return global_max_normal_sub;
        }
else{    
    for( int i =0; i < size ; i++){
            sum += arr[i];
            current_min = min(current_min + arr[i] ,  arr[i]);
            global_min = min( current_min , global_min);
        }
        global_max_circular_sub = sum - global_min;
        global_max_circular_sub = max(global_max_normal_sub, global_max_circular_sub);

}
        return global_max_circular_sub;

}

};

int main(){
    Solution s1;
    int arr[] = {-10,-5,-5,-4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int res = s1.circular_sub_max(arr , n);
    cout<< res ;
}