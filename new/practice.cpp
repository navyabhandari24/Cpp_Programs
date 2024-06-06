#include<iostream>
using namespace std;

// To find nth term of arithmetic series
/*void arithmetic(){
    int n;
    cin>>n;
    int ans=(3*n)+7;
    cout<<ans<<endl;
}*/

// Total number of set bits
void bits(){
    int a,b;
    cin>>a>>b;
    int c1=0;
    int c2 =0;
    for(int i=1; i<=32; i++){
        if(a&1){
            c1++;
            
        }
        a=a>>1;
    }    
    for(int j=1; j<=32; j++){

        if(b&1){
            c2++;
            
        }
        b=b>>1;
    }
    int ans = c1+c2;
    cout<<ans<<endl;
}

int main(){
    //arithmetic();
    bits();
}