#include<bits/stdc++.h>

using namespace std;

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

    if(s1[n1]==s2[n2] && n1!=n2)
         {
             track.push_back(s1[n1]);
             LcsString(s1,s2,track,ans,n1-1,n2-1,length+1,max_length);
         }

    LcsString(s1,s2,track,ans,n1-1,n2,length,max_length);
    LcsString(s1,s2,track,ans,n1,n2-1,length,max_length);
}


int main()
 {
    int t;
     cin>>t;
     while(t--)
     {
        string s1,s2;
        cin>>s1;
        s2=s1;
        string ans; int max_length=0;
        LcsString(s1,s2,"",ans,s1.length()-1,s2.length()-1,0,max_length);

        cout<<ans;
     }
    return 0;
 }
