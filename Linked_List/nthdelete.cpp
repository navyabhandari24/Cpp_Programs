#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertarr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i =1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
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

Node* nthdelete (Node* head, int k){
    
    Node* fastptr = head;
    while(k--){
        fastptr = fastptr->next;
    }
    if(fastptr==NULL){
        return head->next;
    }
    Node* slowptr = head;
    while(fastptr->next!=NULL){
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }
    Node* temp = slowptr->next;
    slowptr->next = slowptr->next->next;
    temp->next = nullptr;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {0,2,0,1,2,1};
    Node* head = convertarr2DLL(arr); 
    head = nthdelete(head,3);
    print(head);
}