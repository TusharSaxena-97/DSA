#include <bits/stdc++.h>

using namespace std;

// Parent class is an abstract class because it contains pure virtual function

class parent
{

//   friend void uncle(parent);
   protected:
        int parent_age = 10;
   public:
       parent()
       {
        cout<<"In parent constructor";
       }
       //virtual int level= 0;
       int var = 0;
       virtual void eat()=0; // every do nothing function must be virtual .//
       void func( int x)
       {
            //parent();
            cout<< " I am from parent class";
       }
};

class child:private parent
{
   public:
      // virtual int level = 1;
        somefunction();
        child()
        {

          cout<<"constructor of child "<<parent_age<<endl;
        }
       int var = 1;
       void eat(){
       cout<<"Child is eating";
       };
       void func( )
       {
            cout<< " I am from child class";
       }
};

class grandchild:public child{
public:
    grandchild()
    {
      cout<<"GrandChild constructor is called"<<endl;
    }
    int level = 2;
    void eat()
    {
       cout<<"Grand Child is eating"<<endl;
    }
};

class rectangle {


public :

    int l ,w ;
    int area( )
    {
        return l*w;
    }

    rectangle operator+(const rectangle &rect)
    {
        rectangle n;
        n.l = l + rect.l;
        n.w = w + rect.w;
        return n;
    }

    rectangle operator-()
    {
        rectangle t ;
        t.w = -w;
        t.l = -l;
        return t;
    }

    rectangle operator--(int)
    {
        rectangle t;
        t.l = 2*l;
        t.w = 2*w;
        return t;
    }

    void display()
    {
     cout <<" length = "<<l << "  width =  "<< w << endl;
    }
};

template <class T> T func(T a, T b)
{
    return a+b;
}

template < class T> class numbers{
public:
    T data;
    T* next;
    numbers( T data)
    {
       this -> data = data;
    }
};


class userexcep:public exception{
public:
    userexcep()
    {
     //cout<<"User exception constructor"<<endl;
    }
};


int main() {

    stack<int, vector<int>> s;

    try{
        userexcep u;
        vector<int> v(4,0);
        //v.at(8);
        //cout<<arr[0] << "  "<< arr[1]<<endl;
        throw u;
    } catch( exception &e)
    {
      cout<<"Exception caught";
      cerr<<e.what();
    }
    catch (userexcep& e)
    {
      cout<<"User Exception is caught"<<endl;
      cerr<<e.what();
    }

    return 0;
}
