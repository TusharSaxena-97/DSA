#include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int next_prime(int n)
{
  for(int i=n;;i++)
    if(isprime(i))
        return i;

  return -1;
}

int func()
{
 string pattern,word;
 int count=0;

 cin>>pattern;
 cin>>word;

 int n = pattern.length();

 vector<int> suff(n,0);
 suff[0] = (int)pattern[0];
 for(int i=1;i<pattern.length();i++)
    suff[i] += suff[i-1];

 n = next_prime(n);
 cout<<"Next prime is = "<<n<<endl;

 int w = 0;
 for(auto x:word)
    w += (int)x;
 w = w%n;

 cout<<"W is  = "<<w<<endl;

 int i=1,j=word.length();

 for(;j<pattern.length();j++,i++)
 {
  if(w==(suff[j]-suff[i-1])%n)
  {
    string sub = pattern.substr(i,j-i+1);
    if(sub==word)
        count++;
  }
 }
 return count;
}

int main()
{
 int t;
  cin>>t;

 while(t--)
 {
    cout<<func()<<endl;
 }
 return 0;
}
