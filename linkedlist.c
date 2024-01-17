#include<bits/stdc++.h>

using namespace std;

class list{

private :
    struct LinkedList
{
 int data;
 LinkedList *next;
};
LinkedList* head;

public :
    list(int value)
    {
     LinkedList* n = new LinkedList();
     n->data = value;
     head = n;
    }

    void display()
    {
         LinkedList *tmp = head;
         while(!tmp)
         {
            cout<<"  "<<tmp->data;
            tmp = tmp->next;
         }

    }
};


int main()
{
 LinkedList A(5);
 A.display();
 return 0;
}
