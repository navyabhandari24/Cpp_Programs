#include<iostream>
#include<list>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};
int main(){
    vector<int> arr = {2,4,6,7};
    Node* y = new Node(arr[0],nullptr);
    cout<<y;
    
}