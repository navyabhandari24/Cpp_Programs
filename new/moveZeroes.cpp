#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

int main(){
    int arr[6]={1,0,5,0,0,0};
    moveZero(arr,6);
    for(int k=0; k<6;k++){
        cout<<arr[k]<<" ";
    }
}

