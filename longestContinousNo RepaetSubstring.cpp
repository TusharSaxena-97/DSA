#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> map;
        int low=0,i,max_length=0,now_length;
        int n=s.length();

        if(n==1)
        return 1;

        for(int i=0;i<n;i++)
       {
           char tmp=s[i];
           if(map.find(tmp)!=map.end())
                if(low<map[tmp]+1)
                    low = map[tmp]+1;

           map[tmp]=i;
           cout<<low<<" Between "<<i<<endl;
           now_length = i-low+1;
           if(now_length>max_length)
                    max_length = now_length;
       }

       return max_length;
    }

int main()
{

 int t;string s;
 cin>>t;
 while(t--){
    cin>>s;
    cout<<lengthOfLongestSubstring(s)<<endl;
 }
  return 0;
}
