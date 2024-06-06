#include <iostream>  
using namespace std;
// 1 to N recursion

/* void fun(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    fun(i+1,n);
}
int main(){
    int n;
    cin>>n;
    int i=1;
    fun(i,n);
    return 0;
} */
void fun(int i,int n){
    if(i<1) return;
    fun(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    fun(n,n);
    return 0;
}

//N to 1 recursion;

/* void fun(int n){
    if(n==0) return;
    cout<<n<<" ";
    fun(n-1);
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
} */