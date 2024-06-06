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

int allocatebook(int arr[],int n, int m){
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
        if(isPossible(arr,n,m,mid)){
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
    int arr[4]={10,20,30,40};
    cout<<allocatebook(arr,4,2);
}