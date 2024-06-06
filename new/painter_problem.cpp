#include<iostream>
using namespace std;

bool isPossible(int arr[],int n, int m, int mid){
    int count=1;
    int sum=0;
    for(int i=0; i<n; i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            count++;
            if(count > m || arr[i] > mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}

int allocateboard(int arr[],int n, int k){
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[4]={5,5,5,5};
    cout<<allocateboard(arr,4,2);
}