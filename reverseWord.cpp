#include<bits/stdc++.h>

using namespace std;

string reverseWord(string str)
{
    string ans;
    int n = str.length();
    string word;
    for(int i=0;i<n;i++)
    {
      if(str[i]==' ')
      {
        if(word.length()>0)
        {
            reverse(word.begin(),word.end());
            ans += word;
            ans+=" ";
        }
        word="";
      }
      else
        word.push_back(str[i]);
    }

    reverse(word.begin(),word.end());
    ans+=word;
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     string str;
     getline(cin,str);
     //cin>>str;
     //cout<<str;
     cout<<reverseWord(str)<<endl;
    }
 return 0;
}
