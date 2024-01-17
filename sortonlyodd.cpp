#include<bits/stdc++.h>

using namespace std;


void TwoWayMerge(vector<int> &a,int start, int mid, int last)
{
  int i=start,j=mid+1;
  vector<int> V;

  while(i<=mid && j<=last)
  {
     if(a[i]%2){i++;continue;}
     if(a[j]%2){j++;continue;}

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
  }
  while(i<=mid)
  {
    if(a[i]%2){i++;continue;}
  V.push_back(a[i]);
  i++;

  }
  while(j<=last)
  {
      if(a[j]%2){j++;continue;}
   V.push_back(a[j]);
   j++;
  }
    for(int i=start;i<=last;i++)
    {
        a[i]=V[i-start];
    }
}

void MergeSort(vector<int> &nums,int start, int last)
{
    if(last<=start)
        return;

    int mid = (start+last)/2;

    MergeSort(nums,start,mid);
    MergeSort(nums,mid+1,last);
    TwoWayMerge(nums,start,mid,last);
}

void sortonlyodd(vector<int> &nums)
{
  MergeSort(nums,0,nums.size()-1);
}

int main()
{
    vector<int> nums{45,6,33,89,-2,90,21,111};
    sortonlyodd(nums);

    for(auto x:nums)
         cout<<x<<" ";

 return 0;

}
