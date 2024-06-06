#include<iostream>
using namespace std;



int partition(int arr[],int low, int high){
    int pivot = arr[low];
    int i = low-1;
    int j = high+1;
    while(true){
        do{
            j--;
        }while(arr[j]>=pivot);
        do{
            i++;
        }while(arr[i]<=pivot);
        if(i<j){
            swap(arr[i],arr[j]);
        }
        else{
            return j;
        }
    }
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi);
        quicksort(arr,pi+1,high);
    }
}

int main(){
    int arr[6]={9,4,7,1,2,3};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}