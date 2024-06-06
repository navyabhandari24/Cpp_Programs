#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r=0;
    while(n--){
        string s;
        cin>>s;
        
        r+=s.find("+")?1:-1;
    }
    cout<<r;
}