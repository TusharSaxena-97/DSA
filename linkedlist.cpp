#include<bits/stdc++.h>

using namespace std;

struct LinkedList
    {
     int data;
     LinkedList* next;
    };

class LList{

private :
    LinkedList* head=NULL;

public :
    LList(int value)
    {
     LinkedList* n = new LinkedList();
     n->data = value;
     head = n;
    }

    LList(){
    }

    void display()
    {
         LinkedList *tmp = head;
         while(tmp)
         {
            cout<<"  "<<tmp->data;
            tmp = tmp->next;
         }
    }

    void insertNode(int value)
    {
        LinkedList* n = new LinkedList();
        n ->data = value;

        if(head==NULL)
        {
           head = n;
           return;
        }
        LinkedList* tmp;
        for(tmp = head; tmp->next!=NULL ;tmp=tmp->next);

        tmp->next = n;
    }


    void DeleteNode(int value)
    {
        if(!head) return;

        if(head->data == value)
            head =  head->next;

        else
            {
            LinkedList *prev = head,*tmp=head->next;

            while(tmp)
            {
                if(tmp->data==value)
                  {
                      prev->next = tmp->next;
                      return;
                  }
                prev = tmp;
                tmp = tmp->next;
            }
        }
    }
};


int main()
{
 LList obj(1);
 obj.insertNode(50);
 obj.insertNode(30);
 obj.insertNode(40);
 obj.insertNode(10);
 obj.insertNode(90);
 obj.DeleteNode(90);
 obj.display();
 return 1;
}
