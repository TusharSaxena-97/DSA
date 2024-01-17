#include<bits/stdc++.h>

using namespace std;

class STACK{

private:
    int arr[100];
    int top_index;
public:
    STACK(int value)
    {
        arr[ 0 ] = value;
        top_index = 0;
    }
    STACK(){
    top_index = -1;
    }

    void Push(int value)
    {
        if(top_index==99) {
            cout<<"Stack Overflow";
            return;
        }
        ++top_index;
        arr[top_index] = value;
    }

    void Pop()
    {
     if(top_index<0) {
        cout<<"Stack Underflow";
        return;
     }

     top_index--;
    }

    int top()
    {
        if(top_index<0)
        {
             cout<<"Empty Stack";
             return -1;
        }
        return arr[top_index];
    }

    void display()
    {
        for(int i=0;i<=top_index;i++)
            cout<<arr[i]<<" ";
    }

};

int main()
{
 STACK s;
 s.Push(56);
 s.Push(54);
 s.Push(52);
 s.Pop();
 s.Push(5);
 s.Push(89);
 cout<<s.top();
 s.display();
 return 0;
}
