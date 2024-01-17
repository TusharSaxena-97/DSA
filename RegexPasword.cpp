#include<bits/stdc++.h>

using namespace std;

bool  enoughlength(string s)
{
    int  l =  s.length();
    return l<=12 && l>=5;
}

bool  onenum(string s)
{
    for(auto x:s)
           if(isdigit(x))
                return true;

    return false;
}

bool onelower(string s)
{
    for(auto x:s)
        if(islower(x))
            return true;

    return false;
}

bool  oneupper(string s)
{
    for(auto x:s)
        if(isupper(x))
            return true;

    return false;
}

bool onespecial(string s)
{
  for(auto x:s)
    if(x=='@' || x=='$')
        return true;

    return false;
}

void createpassword()
{
    string s;
    bool password = false;

    while(!password)
    {
    cout<<"Enter Password"<<endl;
    cin>>s;

    if(!enoughlength(s)) continue;

    if(!onenum(s)) continue;

    if(!onelower(s)) continue;

    if(!oneupper(s)) continue;

    if(!onespecial(s)) continue;

   // if(!isvalidorder(s)) continue;

    password = true;
    }

    cout<<s<<"   Is a valid password "<<endl;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    createpassword();
  }
  return 0;
}
