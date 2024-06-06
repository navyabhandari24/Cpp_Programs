#include<iostream>
#include<array>
using namespace std;

void roOne(int arr[]){
    int i=0,j=4;
    while(i<j){
        swap(arr[i++],arr[j]);
    }
}

void print(int arr[]){
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    roOne(arr);
    print(arr);
}