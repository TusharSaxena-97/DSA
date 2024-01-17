#include<bits/stdc++.h>

class MyClass {
private:
    MyClass(int data) : data_(data) {} // Private constructor

    int data_;

public:
    // Non-static member function for creating instances
    MyClass CreateInstance(int data) {
        return MyClass(data);
    }

    int GetData() {
        return data_;
    }
};

int main() {
    // MyClass obj; // Error: Cannot access the private constructor

    MyClass instance;
    // Use the member function to create an object
    MyClass obj = instance.CreateInstance(42);

    // Access the object's data using a public member function
    int value = obj.GetData();

    std::cout << "Data: " << value << std::endl;
}
