#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int k,int mid,int n){
    int count=1;
    int lastpos=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]-lastpos>=mid){
            count++;
            if(count==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}

int cows(int arr[],int n,int k){
    sort(arr,arr+n);
    int s=0;
    int maxi=-1;
    for(int i=0; i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<e){
        if(isPossible(arr,k,mid,n)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5]={4,2,1,3,6};
    cout<<cows(arr,5,2);
}