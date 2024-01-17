#include<bits/stdc++.h>

using namespace std;

class vehicle{
    public:
    string name = "This is from vehicle class";
};


class car : virtual public vehicle{
public:
    //string name = "This is from car class";
};


class scooter : virtual public vehicle
{
public:
    //string name = "This is from scooter class";
};


class crooter: public car , public scooter
{
public:

};


int main()
{
 crooter c;
 cout<<c.name;
 return 0;
}
