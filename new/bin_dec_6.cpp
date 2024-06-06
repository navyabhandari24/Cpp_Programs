#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n%2;
        ans = (bit*pow(10,i))+ans;
        cout<<ans<<endl;
        n=n/2;
        i++;
    }
    cout<<ans<<endl;
}