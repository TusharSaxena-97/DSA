#include <iostream>       // std::cerr
#include <exception>      // std::bad_exception, std::set_unexpected

void myunexpected () {
  std::cerr << "unexpected Error has ocucured called\n";
  throw ;
}

void myfunction () throw (int,std::bad_exception) {
  std::cerr<<"In the function call\n";
  throw 'x'; // throws char (not in exception-specification)
}

int main (void) {
  std::set_unexpected(myunexpected);
  try {
    myfunction();
  }
  catch (int) { std::cerr << "caught int\n"; }
  catch (std::bad_exception be) { std::cerr << "caught bad_exception\n"; }
  catch (...) { std::cerr << "caught some other exception\n"; }
  final{
    std::cout<<"Final bloc is running \n";
  }
  return 0;
}
