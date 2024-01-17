#include<bits/stdc++.h>

using namespace std;

int LCS(string s1, string s2, int n1 , int n2)
{
    if(n1<0 || n2<0) return 0;

    if(s1[n1]==s2[n2])
        return LCS(s1,s2,n1-1,n2-1)+1;

    return max(LCS(s1,s2,n1-1,n2),LCS(s1,s2,n1,n2-1));
}

void LcsString(string s1, string s2,string track, string &ans,int n1 , int n2, int length , int &max_length)
{
    if(n1<0 || n2<0){
        if(length>max_length)
        {
            max_length = length;
            ans = track;
            reverse(ans.begin(),ans.end());
        }
        return;
    }

    if(s1[n1]==s2[n2])
         {
             track.push_back(s1[n1]);
             LcsString(s1,s2,track,ans,n1-1,n2-1,length+1,max_length);
         }

    LcsString(s1,s2,track,ans,n1-1,n2,length,max_length);
    LcsString(s1,s2,track,ans,n1,n2-1,length,max_length);
}

int  FindLcs(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();

    vector<vector<int>> dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=m;j++)
       {
        if(s1[i-1]==s2[j-1])
            dp[i][j] = 1+dp[i-1][j-1];
        else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
       }
    }
    return dp[n][m];
}

int main()
{
 int t;
 cin>>t;

 while(t--)
 {
   string s1,s2;
   cin>>s1;
   cin>>s2;
   //cout<<LCS(s1,s2,s1.length()-1,s2.length()-1)<<endl;
   string ans;int max_length=0;
   LcsString(s1,s2,"", ans, s1.length()-1,s2.length()-1,0,max_length);
   cout<<"The longest LCS String is  = "<<ans;
   cout<<FindLcs(s1,s2);
 }
 return 0;
}
