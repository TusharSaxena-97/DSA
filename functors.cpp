#include <iostream>

// Functor class to add a constant value
class AddConstant {
public:
    AddConstant(int value){ this->constant = value;}

    int operator()(int x) const {
        return x + constant;
    }

private:
    int constant;
};

int main() {
   // AddConstant addFive(5);
   std::cout << AddConstant(5);
//    std::cout << "Result: " << addFive(10) << std::endl; // Calls the functor like a function

    return 0;
}
