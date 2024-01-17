#include<bits/stdc++.h>


using namespace std;

void Display(vector<vector<int>> v)
{
   for(int i=0;i<v.size();i++)
   {
    for(int j=0;j<v[0].size();j++)
        cout<<v[i][j];
    cout<<endl;
   }
}

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
        Node *gethead()
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

        vector<vector<int>> findpairs(int target)
        {
            vector<vector<int>>  ans;
            unordered_map<int,Node*> m;

            Node* tmp=head;
            for(;tmp!=NULL;tmp=tmp->next)
                m.insert(make_pair(tmp->data,tmp));

            tmp = head;
            while(tmp)
            {
              unordered_map<int,Node*>::iterator it;
              it = m.find(target-(tmp->data));

              if(it!=m.end())
              {
                 vector<int> v(2,0);
                 v[0] = tmp->data;
                 v[1] = it->first;

                 ans.push_back(v);

                 auto it = m.find(tmp->data);
                 m.erase(it);
              }

              tmp = tmp->next;
            }

            return ans;
        }
};
int main()
{
 LinkedList l;
 l.InsertAtBeginning(1);
 l.InsertAtBeginning(3);
 l.InsertAtBeginning(4);
 l.InsertAtBeginning(2);
 l.InsertMiddle(6,1);
 l.InsertAtEnd(9);

 Display(l.findpairs(5));


 return 0;
}
