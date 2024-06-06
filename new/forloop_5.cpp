#include<iostream>
using namespace std;

int main(){
    /*int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;*/

    //Fibonnaci Series

    /*int n;
    cin>>n;
    int a=0;
    int b=1;
    int sum;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }*/

    // Prime or not

    int n;
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number";
            break;
        }
        else{
            cout<<n<<" is a prime number";
            break;
        }
    }
}