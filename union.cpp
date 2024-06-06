#include<iostream>
#include<array>
using namespace std;

void unionarr(int arr1[],int arr2[]){
    int i=0,j=0;
    int m=5,n=4;
    while(i<m && j<n){
        if(arr1[i]< arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            j++;
            i++;
        }
    }
    while(i<m){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(i<n){
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main(){
    int arr1[] = {1,3,4,5,7};
    int arr2[] = {2,3,5,6};
    unionarr(arr1,arr2);
}