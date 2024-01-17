#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* bottom;

    Node(int value)
    {
      data = value;
      next = NULL;
      bottom = NULL;
    }
};

void Display(Node* head)
{
   while(head)
   {
    cout<<head->data<<"->";
    head = head->next;
   }
   cout<<"NULL"<<endl;
}

class Linkedist{
    private: Node* head = NULL;
    public:
        Node* gethead()
        {
         return head;
        }
        Node* CreateListRow(vector<int> nums)
        {
         Node* ans = new Node(-1);
         Node* last=ans;

         for(auto x:nums)
         {
            Node *n = new Node(x);
            last->next = n;
            last = last->next;
         }

         return ans->next;
        }

        Node* MergeLists(Node* head1, Node* head2)
        {
            Node* tmp = head2;
         while(head1 && head2)
         {
          head1->bottom = head2;
          head1 = head1->next;
          head2 = head2->next;
         }
         return tmp;
        }
};

int main()
{
  vector<vector<int>> arr;
  int n,m;
  cin>>n>>m;

  for(int i=0;i<n;i++)
  {
   vector<int> v;
   for(int j=0;j<m;j++)
   {
     int data;
     cin>>data;
     v.push_back(data);
   }
   arr.push_back(v);
  }

  Linkedist l;
  Node* prev = l.CreateListRow(arr[0]);
  Node* root = prev;
  Display(prev);

  for(int i=1;i<n;i++)
  {
    Node* curr = l.CreateListRow(arr[i]);
    Display(curr);
    prev = l.MergeLists(prev,curr);
  }

  cout<<root->bottom->bottom->next->data;
  return 0;
}
