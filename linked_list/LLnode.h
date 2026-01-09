#include <iostream>
using namespace std;
class Node {
public: 
    int data;
    Node* next;

    Node(int data, Node* next)
    {
        this->data=data;
        this->next=next;
    }
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
    Node()
    {
        this->data=0;
        this->next=nullptr;
    }
};
inline void traversal(Node* head)
    {
        Node* mover=head;
        while(mover!=nullptr)
        {
            cout<<mover->data<<"->";
            mover=mover->next;
        }
        cout<<"nullptr"<<endl;
    }
inline Node* insertNode(Node* head,int position,int data)
{
    Node* node=new Node(data);
    if(position==0)
    {
        node->next=head;
        return node;
    }
    Node* mover=head;
    
    int index=0;

    while(mover!=nullptr && index !=(position-1))
    {
        mover=mover->next;
        index++;
    }
    if(mover== nullptr)return head;
    node->next=mover->next;
    mover->next=node;
    return head;
}
inline Node* deleteNode(Node* head,int position)
{
    if(position==0)
    {
        Node* newhead=head->next;
        delete head;
        return newhead;
    }
    int index=0;
    Node* mover=head;
    while(mover!=nullptr && index<position)
    {
        mover=mover->next;
        index++;
    }
    if(mover==nullptr)
    {
        cout<<"out of bound";
        return head;
    }    
    Node* temp=mover->next;
    mover->next=mover->next->next;
    delete temp;
}
inline int searchNode(Node* head,int key)
{
    int index=0;
    Node* mover=head;
    while(mover!=nullptr)
    {
        if(mover->data==key)
        {
            return index;
        }
        mover=mover->next;
        index++;
    }
    cout<<"key does not exist"<<endl;
    return -1;
}
inline int lengthOfLL(Node* head)
{
    Node* mover=head;
    int count=0;
    while(mover!=nullptr)
    {
        count++;
    }
    return count;
}