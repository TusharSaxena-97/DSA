#include <bits/stdc++.h>

using namespace std;

int a;
mutex mtx;
//atomic.atomic()

void taskA(string str)
{
    //cout<<str<<endl;
  for( int i = 0; i< 1000000 ; i++)
   {
       lock_guard<mutex> lock(mtx);
       cout<<"Thread "<<str<<"  Working on a = "<<a<<endl;
       a++;
   }
}

//atomic<int> b = 0;

//int b = 0;
void taskB(string str)
{
    int b=0 ;
   for( int i = 0; i<1000000 ; i++)
       {
         cout<<"Thread "<<str<<"  Working on b now b = "<<b<<endl;
            b++;
       }
}


struct ob{
    int data;
    int data2;
    ob( ob& copyob)
    {

    }
};


atomic<ob> m;


int main()
{
    thread t1(taskA,"tushar");
    thread t2(taskA,"Saxena");

    t1.join();
    t2.join();


    cout<<b
    //cout<<b.load();

    return 0;
}
