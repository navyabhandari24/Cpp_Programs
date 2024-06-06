#include<iostream>
using namespace std;

int main(){
    //IF-ELSE 

    /*int n;
    cin>>n;
    if(n>0){
        cout<<"n is positive"<<endl;
    }
    else{
        cout<<"n is negative"<<endl;
    }
    */

    /*int a,b;
    cin>>a>>b;
    cout<<"Value of a and b is "<<a<<" "<<b<<endl;
    */
    

    // WHILE LOOP

    //  Sum 1 to N numbers

    int i,n;
    i=1;
    int sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"Sum of numbers is "<<sum;
}