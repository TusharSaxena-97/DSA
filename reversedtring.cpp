#include<bits/stdc++.h>

using namespace std;

string reverseString(string str)
{
  stack<char> s;

  for(auto x:str)
    s.push(x);

  int i=0;
  while(!s.empty())
  {
    str[i] = s.top();
    s.pop();
    i++;
  }
    return str;
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
      string s;
      cout<<"Enter Word";
      cin>>s;
      cout<<reverseString(s)<<endl;
     }

     return 0;
}
