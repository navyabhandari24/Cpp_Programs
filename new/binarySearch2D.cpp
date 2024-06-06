#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>>& matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        int element=matrix[mid/col][mid%col];

        if(element==target){
            return 1;
        }
        else if(element<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout<<search(matrix,0);
}