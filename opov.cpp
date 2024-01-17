#include<bits/stdc++.h>
#define kg 1000

using namespace std;

class some
{
public:
    int a ; int b;
    some operator+(const some &obj)
    {

        some n;
        n.a = a + obj.a;
        n.b = b + obj.b;
        return n;
    }
};

class func{
public: int n = 5;
    func ()
    {
     cout<<"Constructor is being called"<<endl;

    }

    void operator()(int num)
    {
      cout<<"After ading 5 number will be => "<<n+num<<endl;
    }
};


int main()
{
 some o1,o2;
 o1.a = 10; o1.b = 20;
 o2.a = 20; o2.b=30;

 some o3 = o1+o2;
 cout<<o3.a<<"\t"<<(o3.b kg)<<endl;

 func f;
 f(67);
 return 0;
}
