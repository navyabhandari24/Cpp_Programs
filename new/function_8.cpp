#include<iostream>
using namespace std;

//Function signature
int fact(int a){
    //Function body
    int f=1;
    for(int i=1; i<=a; i++){
        f=f*i;
    }
    return f;
}

void nCr(int n,int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
}

int main(){
    // Function call
    nCr(8,2);
}