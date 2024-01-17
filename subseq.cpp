#include<bits/stdc++.h>


using namespace std;

void subseq(string ans, string s, int n)
{
    if(n<0)
    {
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        return;
    }

    subseq(ans,s,n-1);
    ans.push_back(s[n]);
    subseq(ans,s,n-1);

}


void substring(string s)
{
   for(int i=0;i<s.length();i++)
   {
    for(int j=i;j<s.length();j++)
    {
        string r = s.substr(i,j-i+1);
        cout<<r<<endl;
    }
   }
}


int main()
{
   int t;
   cin>>t;

   while(t--)
   {
      string s;
      cin>>s;
      cout<<"Subsequesnces Are = ";
      subseq("",s,s.length()-1);


      cout<<"Substrings Are  = "<<endl;
      substring(s);
   }
   return 0;
}
