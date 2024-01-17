#include<bits/stdc++.h>
using namespace  std;

StockSpan(int n,  vector<int> v, int index)
{
 if(n==1)
    return 0;

 if(v[index]<v[n])
    return StockSpan(n-1,v,index);

 return max(StockSpan(n-1,v,n),StockSpan(n-1,v,index))+1;
}

int main()
{

 int t;
 cin>>t;

 while(t--)
 {
 int n;
 cout<<"Enter The Size of the Array";
 cin>>n;


 vector<int> v(n+1,0);
 v[n] = INT_MAX;

 for(int i=0;i<n;i++)
    cin>>v[i];

 cout<<StockSpan(n,v,n);
 }
 return 0;

}
