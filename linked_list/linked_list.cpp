#include <iostream>
#include<vector>
#include "LLnode.h"

using namespace std;

Node* arrayToLinkedList(vector<int> arr)
{
    if(arr.empty())return nullptr;

    Node* header=new Node(arr[0]);
    Node* mover=header;

    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return header;

};
int main()
{
vector<int> arr={1,2,3,4,5,6,7};
Node* header=arrayToLinkedList(arr);
traversal(header);
return 0;
}