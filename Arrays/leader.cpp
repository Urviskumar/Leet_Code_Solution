//find the leader in the array
#include <iostream>


using namespace std;
class solution{

public:

void leader(int arr[], int size){
    int j=size-1;
    int temp[size];
    temp[j] = arr[j];
    int count = size;
    for( int i = size-1 ; i>=0 ; i--){
        if ( arr[i-1]>arr[j]) { 
            temp[i-1] = arr[i-1];
            j=i;
            count--;}
    }
    for (int i = count; i < size; i++) {
            cout << temp[i] << " ";
        }
}

};
int main(){
    solution s1;
    int n;
    cout<<"enter the size";
    cin>>n;

    int *arr = new int [n];

    for(int i =0 ; i <n ; i ++){
        cout<<"enter the elements"<<" ";
        cin>>arr[i];
    }

    s1.leader(arr , n);

}