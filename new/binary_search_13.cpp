#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
     int f=-1;
    while(s<=e){
       
        if(arr[mid]==k){
            f=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return f;

}

int lastocc(int arr[], int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
     int f=-1;
    while(s<=e){
       
        if(arr[mid]==k){
            f=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return f;

}

int main(){
    int even[5] = {0,1,2,2,2};
    int ans=firstocc(even,5,2);
    int ans1=lastocc(even,5,2);
    cout<<ans<<endl;
    cout<<ans1<<endl;

}