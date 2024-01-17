
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

class LinkedList{
    private: Node* head = NULL;
    public:
        void Display(Node* root)
        {
         while(root)
          {
            cout<<root->data<<"-> ";
            root = root->next;
          }
         cout<<"NULL"<<endl;
        }

        int InsertAtBeginning(int value)
        {
         Node* n = new Node(value);
         n->next = head;
         head = n;

         Display(head);
         return value;

        }

        int InsertAtEnd(int value)
        {
          Node *n = new Node(value);
          Node* tmp = head;

          while(tmp && tmp->next)
          {
             tmp = tmp->next;
          }

          tmp->next = n;

          Display(head);
          return value;
        }


        int InsertMiddle(int value, int k)
        {
            if(k<1) return -1;
            if(k==1)
            {
                    InsertAtBeginning(value);
                    return value;
            }

            int c=-1;

            Node* tmp = head;
            Node* n = new Node(value);

            while(tmp)
            {
                c++;
                if(c==k)
                {
                Node* ahead = tmp->next;
                tmp->next = n;
                n->next = ahead;

                Display(head);
                return value;
                }
            }
            return -1;
        }


        Node* ExcahngeFirstLast()
        {
            Node* prev=NULL,*curr=head;

            while(curr)
            {
                prev = curr;
                curr = curr->next;
            }


            Node* tmp = head;
            head = curr;
            head->next = tmp->next;

            prev->next = tmp;
            tmp->next = NULL;

            Display(head);
            return head;
        }
};
int main()
{
 LinkedList l;
 l.InsertAtBeginning(1);
 l.InsertAtBeginning(2);
 l.InsertAtBeginning(4);
 l.InsertAtBeginning(5);
 l.InsertMiddle(56,1);
 l.InsertAtEnd(99);

 l.ExcahngeFirstLast();
 return 0;
}
