#include <iostream>
using namespace std;

int selectionSort(int arr[],int n){
    
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++ ){
            if(arr[minIndex]>arr[j])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[5]={6,2,8,4,10};
    selectionSort(arr,5);
}