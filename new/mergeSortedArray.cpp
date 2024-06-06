#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[] , int m , int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

int main(){
    int arr1[5]={2,4,6,8,9};
    int arr2[4]={1,3,5,7};
    int arr3[9]={0};

    merge(arr1,5,arr2,4,arr3);

    for(int s=0; s<9;s++){
        cout<<arr3[s]<<" ";
    }
}