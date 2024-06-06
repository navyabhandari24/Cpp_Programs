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

Node* deletefirst(Node* head){
    if(head == NULL || head->next==NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}
Node* deleteTail(Node* head){
    Node* tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;
}

Node* deleteK(Node* head,int k){
    if(head==NULL) return NULL; 
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* next = temp->next;
    if(prev==NULL && next==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return deletefirst(head);
        
    }
    else if(next==NULL){
        return deleteTail(head);
        
    }
    temp->next = nullptr;
    temp->back = nullptr;
    prev->next = next;
    next->back = prev;
    delete(temp);
    return head;
}
int main(){
    vector<int> arr = {2,4,6,7};
    Node* head = convertarr2DLL(arr);

    head = deleteK(head,4);
    print(head);
}