#include<bits/stdc++.h>

using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int value)
    {
     data = value;
     next = NULL;
    }
};

class Stack{
private :
    Node*  head = NULL;

public:
    void push(int value)
    {
        Node*  n =  new Node(value);
        n->next = head;
        head = n;
    }
    void pop()
    {
     if(!head)
     {
      cout<<"Empty Stack";
      return;
     }
     cout<<"popped out "<<head->data;
     head = head->next;
    }

    int top()
    {
        if(!head){
            cout<<"Empty Stack";
            return -1;
        }
        return head->data;
    }
};
int main()
{
    Stack s;
    s.push(45);
    s.push(111);
    s.push(5);
    s.push(345);
    s.pop();
    s.pop();
    cout<<"Top Element = "<<s.top();

    return 0;

}
