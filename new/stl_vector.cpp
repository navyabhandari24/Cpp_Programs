#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity of vector "<<v.capacity()<<endl;

    v.push_back(1);//put elment at the back
    cout<<"Capacity of vector "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    cout<<"Size of vector "<<v.size()<<endl;

    cout<<"Element at first index "<<v.at(1)<<endl;

    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;
    
    v.pop_back();//removes last element
    for(int i :v){
        cout<<i<<" ";
    }
}