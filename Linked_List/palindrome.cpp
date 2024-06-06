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

Node* reverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
bool ispalindrome(Node* head){
    if(head==NULL || head->next!=NULL) return true;
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead  = reverseLL(slow->next);
    Node* first = head;
    Node* second = newHead;
    bool is = true;
    while(second!=NULL){
        if(first->data != second->data){
            is = false;
            break;
        }
        first = first->next;
        second = second->next;
    }
    reverseLL(newHead);
    return is;
}
int main(){
    vector<int> arr = {2,7,7,2,2};
    Node* head = convertarr2DLL(arr); 
    bool ispalin = ispalindrome(head);
    if(ispalin){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}