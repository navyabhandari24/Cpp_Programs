#include<iostream>
using namespace std;

int main(){
    int arr[6]={5,2,8,7,1,4};
    int n=6;
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{ 
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}