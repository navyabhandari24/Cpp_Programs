#include<iostream>
using namespace std;

void swapalt(){
    int a[100];
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int temp;
    for(int j=0;j<n;j=j+2){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    for(int k=0; k<n;k++){
        cout<<a[k]<<" ";
    }
}

int main(){
    swapalt();
}