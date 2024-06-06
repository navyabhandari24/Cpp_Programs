#include<iostream>
using namespace std;

int main(){
    int arr[6]={9,4,7,1,2,3};
    int n=6;
    for(int i=0; i<n-1; i++){
        bool swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

