#include<iostream>
using namespace std;

int main(){
    //Pattern 1
    /*
    1 1 1
    2 2 2
    3 3 3
    */

    /*int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i ;
            j++;
        }
        cout<<endl;
        i++;
    }
    */

    //Pattern 2
    /*
    1 2 3
    1 2 3
    1 2 3
    */

    /*int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j ;
            j++;
        }
        cout<<endl;
        i++;
    }
    */
    
    //Pattern 3
    /* A
       B B
       C C C
    */
    /*int n;
    cin>>n;
    int i=1;
    char a = 'A';
    while(i<=n){
        
        int j=1;
        while(j<=i){
            cout<<a<<" ";
            j++;
        }
        a++;
        cout<<endl;
        i++;
    }
    */

    //Pattern 4
    /*
    A
    B C
    C D E
    D E F G
    */
    /*int n;
    cin>>n;
    int i =1;
    char a='A';
    while(i<=n){
        int j=1;
        char val=a+i-j;
        while(j<=i){
            cout<<val<<" ";
            j++;
            val++;
        }
        i++;
        cout<<endl;
    }
    */

    // Pattern 5
    /*
    D
    C D
    B C D
    A B C D
    */
    int n;
    cin>>n;
    char b = 64+n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char val=b-i+j;
            cout<<val<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    

}   