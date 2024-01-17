#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // Define a lambda function that takes two integers and returns their sum
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    int result = add(3 , 4);
    std::cout << "Result: " << result << std::endl;


    // the lambda function can access all the data memebers in the same scope
    int a = 10;
    int b = 20;


    auto func = [&] (int x) {

        cout<<"Labmda Function is working";
        cout<<a<<"\t"<<b<<endl;
            a--;
            b++;
    };
    func(5);

    auto comp = [] (int x, int y) -> int
    {
     return x<y;
    };


    //func();

    cout<<a<<"\t"<<b<<endl;


    vector<int> v{1,-2,3,12 ,10};
    for_each( v.begin(), v.end() ,[](int x){
             if( x%2==0) cout<<x<<" is divisible by 2"<<endl;
             else cout<<x<<" is not divisible by 2"<<endl;
             });

    sort(v.begin(),v.end() , [] (int a , int b ) -> int { return a > b;} );

    for_each( v.begin(), v.end() , [](int x){cout<<x<<" ";});

    return 0;
}
