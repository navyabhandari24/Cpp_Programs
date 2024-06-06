#include<iostream>
using namespace std;

int main(){
    int amt;
    int rs100,rs50,rs20,rs1;
    cin>>amt;
    switch(1){
        case 1: rs100=amt/100;
                amt=amt%100;
                cout<<"100 Rs = "<<rs100<<endl;
        
        case 2:  rs50=amt/50;
                amt=amt%50;
                cout<<"50 Rs = "<<rs50<<endl;

        case 3: rs20=amt/20;
                amt=amt%20;
                cout<<"20 Rs = "<<rs20<<endl; 

        case 4: rs1=amt/1;
                amt=amt%1;
                cout<<"1 Rs = "<<rs1<<endl;       
    }
}