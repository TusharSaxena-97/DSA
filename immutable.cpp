// C++ program to illustrate the use of mutalbe storage
// class specifiers
#include <iostream>
using std::cout;

class Test {
public:
	static const int x;
	// defining mutable variable y
	// now this can be modified
	const int y=202;

    static void func(){
        cout<<x;
    }

	Test()
    {
       // x = 30;
 somefunc();
	}
};
const int Test::x = 30;


int main()
{
	// t1 is set to constant
	Test::func();


	// Uncommenting below lines
	// will throw error
	// t1.x = 8;
	// cout << t1.x;
	return 0;
}
