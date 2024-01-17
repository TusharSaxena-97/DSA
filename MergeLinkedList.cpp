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
        Node* gethead()
        {
         return head;
        }
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

           if(!head)
           {
             head = n;
             return value;
           }

          while(tmp && tmp->next)
          {
             tmp = tmp->next;
          }

          tmp->next = n;

          //Display(head);
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

        Node* MergeLinkedList(Node* head1,Node *head2)
        {
           // Node *tmp = head1;
            Node *ans = new Node(-1);
            Node *last = ans;


            while(head1 || head2)
            {
                if(head1)
                {
                    last->next = head1;
                    last = last->next;
                    head1 = head1->next;
                }

                if(head2)
                {
                last->next = head2;
                last = last->next;
                head2 = head2->next;
                }
            }

            if(head1)
             last->next = head1;

            if(head2)
                last->next = head2;

            Display(ans->next);
            return ans->next;

        }
};
int main()
{
 LinkedList l;
 l.InsertAtBeginning(1);
 l.InsertAtBeginning(1);
 l.InsertAtBeginning(1);
 l.InsertAtBeginning(1);
 l.InsertMiddle(56,1);
 l.InsertAtEnd(1);

 LinkedList ll;
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);
 ll.InsertAtBeginning(2);

 l.Display(l.MergeLinkedList(l.gethead(),ll.gethead()));


 cout<<"Enter Matrix Data";
 vector<vector<int>> v(3,vector<int> (4,0));

 int n=3,m=4;

 LinkedList MatrixList;
 for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      {
          int data;
          cin>>data;
          v[i][j] = data;
          MatrixList.InsertAtEnd(v[i][j]);
      }
 MatrixList.Display(MatrixList.gethead());

 return 0;
}
