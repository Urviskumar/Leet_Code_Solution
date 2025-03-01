//space - theta(1)
//time - theta(n)
#include <iostream>

using namespace std;
class solution{
public:

void rotate(int a[], int size, int d){
    d = d % size;
    reverse( a,   0 , d-1);//0 to d-1 = till d
    reverse( a,  d, size-1);//0 to size-1 = size
    reverse( a,   0, size-1);

}

void reverse(int arr[], int l , int h){
    int temp;
    while(l<h){
        temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
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
    int factor;
    cin>>factor;
    s1.rotate(arr , n, factor);

    for(int i =0 ; i <n ; i ++){
        cout<<arr[i]<<" ";
    }
}