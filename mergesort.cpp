#include<bits/stdc++.h>

using namespace std;

/*Stable Sorting
Time Complexity O(n*Log(n))
Space Complexity O(Log(n))
Good for large unsorted datasets
Best Time Complexity = Average Time Complexity*/

void Display(vector<int> nums)
{
   for(auto x:nums)
   cout<<" "<<x;
   cout<<endl;
}

void TwoWayMerge(vector<int> &a,int start, int mid, int last)
{
  int i=start,j=mid+1;
  vector<int> V;
  //Display(a);
  //cout<<start<<mid<<last;
  while(i<=mid && j<=last)
  {
     if(a[i]<=a[j])
     {
      V.push_back(a[i]);
      i++;
     }
     else if(a[j]<a[i])
     {
      V.push_back(a[j]);
      j++;
     }
     //cout<<"CP1";
  }
  while(i<=mid)
  {
  V.push_back(a[i]);
  i++;
   //cout<<"CP2";
  }
  while(j<=last)
  {
   V.push_back(a[j]);
   j++;
    //cout<<"CP3";
  }
    for(int i=start;i<=last;i++)
    {
        a[i]=V[i-start];
         //cout<<"CP4";
    }

}

void MergeSort(vector<int> &nums,int start, int last)
{
    // cout<<start<<"  "<<last<<endl;
    if(last<=start)
        return;

    int mid = (start+last)/2;

    MergeSort(nums,start,mid);
    MergeSort(nums,mid+1,last);
    TwoWayMerge(nums,start,mid,last);
   // Display(nums);
}

void func()
{
  int n;cin>>n;
  vector<int> nums;
  while(n--){
    int z; cin>>z;
    nums.push_back(z);
  }n=nums.size();
    //TwoWayMerge(nums,0,(n-1)/2,n-1);
    //TwoWayMerge(nums,0,0,1);
    MergeSort(nums,0,n-1);
    Display(nums);
}

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    func();
 }
 return 0;
}
