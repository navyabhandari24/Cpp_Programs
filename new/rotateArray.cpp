#include <iostream>
using namespace std;

void rotate(int arr[], int n,int k){
    int temp[n];
    for(int i=0; i<n; i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int s=0; s<n; s++){
        arr[s]=temp[s];
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int k=3;
    rotate(arr,5,k);
    for(int j=0; j<5;j++){
        cout<<arr[j]<<" ";
    }
}