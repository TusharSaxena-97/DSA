// C program to illustrate the #pragma exit and pragma
// startup
#include <bits/stdc++.h>
using namespace std;

template< typename T>class Add{
public:
    static T met( T a , T b);
};



template<typename T> void func1(T data) { cout << "Inside func1()\t"<<data<<endl; }

void func2() { cout << "Inside func2()\n"; }

int main()
{
	 func1<int> (56);
	 func1<string>("Tushar Saxena");
	 func1<double>(1.2);
	 func1<int>(0);

	//cout<<Adds::obj.met("wonder ","land");
	return 0;
}

// This code is contributed by shivanisinghss2110

