#include <iostream>
#include <utility>
using namespace std;
void r(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-1-i]);
    r(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    r(0,arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}