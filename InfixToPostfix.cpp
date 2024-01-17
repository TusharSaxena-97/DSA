#include<bits/stdc++.h>

using namespace std;

class PostFix{
private:
    string postfix;
    bool check_order(char a, char b)
    {
       unordered_map<char,int> m;
       m['('] = 1;
       m['*'] = 2;
       m['/'] = 3;
       m['+'] = 4;
       m['-'] = 5;

       if(m[a]<m[b])
            return true;
       return false;
    }
public:
    void EmptyStack(stack<char> &s,string &postfix)
    {

        while(!s.empty())
        {
          char t = s.top();
          s.pop();

          if(t!='(')
          postfix.push_back(t);

          else
            return;
        }
    }

    string Convert(string infix)
    {
       stack<char> s;
       string postfix;

       for(auto x:infix)
       {
          if(x>='a' && x<='z')
            postfix.push_back(x);

          else
          {
            if(x==')')
               EmptyStack(s,postfix);

            else if(!check_order(x,s.top()))
               s.push(x);

            else
            {
               char t = s.top();
               s.pop();

               postfix.push_back(t);
            }
          }
       }
       return postfix;
    }
};

int main()
{
 string s;
 cin>>s;

 PostFix p;
 cout<<p.Convert(s);

 return 0;
}
