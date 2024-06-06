#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertarr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i =1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int addhelper(Node* temp){
    if(temp == NULL){
        return 1;
    }
    int carry = addhelper(temp->next);
    temp->data += carry;
    if(temp->data<10) return 0;
    temp->data = 0;
    return 1;
}
Node* addone(Node* head){
    int carry = addhelper(head);
    if(carry==1){
        Node* newHead = new Node(1);
        newHead->next = head;
        head = newHead;
    }
    return head;
}

int main(){
    vector<int> arr = {4,7,4,6,9};
    Node* head = convertarr2DLL(arr);
    Node* h = addone(head);
    print(h);
}