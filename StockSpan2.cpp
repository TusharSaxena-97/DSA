#include<bits/stdc++.h>

using namespace std;

vector<int> Solve(vector<int> v)
{
    int n = v.size();
    stack<int> s;
    s.push(0);

    vector<int> ans(n,1);
    for(int i=1;i<n;i++)
    {
        while(v[i]>=v[s.top()] && !s.empty())
           {
               s.pop();
           }

        if(s.empty())
            ans[i] = i+1;

        else
            ans[i] = i-s.top();

        s.push(i);
    }
    return ans;
}

int main()
{
 int t;
 cin>>t;

 while(t--)
 {
   int n;
   cout<<"Enter The Size of Array"<<endl;
   cin>>n;

   vector<int> v(n,0);
   for(int i=0;i<n;i++)
        cin>>v[i];

   v = Solve(v);

   for(auto x:v)
        cout<<" "<<x;

 }
 return 0;
}
