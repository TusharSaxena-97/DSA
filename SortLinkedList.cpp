
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


Node* findmid(Node *head)
{
 Node *slow = head;
 Node *fast = head;

 while(fast && fast->next)
 {
    fast = fast->next->next;
    slow = slow->next;
 }
    return slow;
}

Node* Merge(Node* head1, Node* head2)
{
    Node* ans = new Node(-1);
    Node* last = ans;
    Node *tmp1=head1,*tmp2=head2;

    while(tmp1 || tmp2)
    {
        if(tmp1->data<tmp2->data)
        {
            last->next = tmp1;
            tmp1 = tmp1->next;
        }
        else
        {
            last->next = tmp2;
            tmp2 = tmp2->next;
        }
         last = last->next;
    }
    if(tmp1)
        last->next = tmp1;

    if(tmp2)
        last->next = tmp2;

    return ans->next;
}

Node *MergeSort(Node *head){

    if(!head->next)
        return head;

    Node *mid = findmid(head);
    Node* head2 = mid->next;
    mid->next = NULL;

    head = MergeSort(head);
    head2 = MergeSort(head2);
    return Merge(head,head2);
}


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
};
int main()
{
 LinkedList l;
 l.InsertAtBeginning(95);
 l.InsertAtBeginning(74);
 l.InsertAtBeginning(36);
 l.InsertAtBeginning(17);
 //l.Display(l.gethead());

 LinkedList ll;
 ll.InsertAtBeginning(99);
 ll.InsertAtBeginning(88);
 ll.InsertAtBeginning(77);
 ll.InsertAtBeginning(66);
 ll.InsertAtBeginning(55);
// ll.Display(ll.gethead());

 Node* sortedhead = Merge(ll.gethead(),l.gethead());
 cout<<sortedhead;
 ll.Display(sortedhead);

 return 0;
}
