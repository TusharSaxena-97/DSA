#include<bits/stdc++.h>
using namespace std;


void Display(vector<int> nums)
{
 for(auto x:nums)
    cout<<x<<" ";
    cout<<endl;
}

void swapvalues(int &a,int &b)
{
   int tmp = a;
   a = b;
   b = tmp;
}

void heapify(vector<int> &nums, int n, int i,int is_swapped)
{
    //Display(nums);
    if(i<0)
        return;

    int largest=i;int r = 2*i+2; int l = 2*i+1;

    if(l<=n && nums[l]>nums[largest])
        largest = l;
    if(r<=n && nums[r]>nums[largest])
        largest = r;

    if(largest!=i){
           // cout<<"Swapping values"<<nums[i]<<" And "<<nums[largest]<<endl;
        swapvalues(nums[i],nums[largest]);
        heapify(nums,n,largest,1);
    }
    if(is_swapped)
        return;
    heapify(nums,n,i-1,0);
}

void heap_sort(vector<int> &nums)
{
    int n=nums.size();
    heapify(nums,nums.size()-1,nums.size()-1,0);

    for(int i=n-1;i>=0;i--)
    {
        //cout<<nums[0]<<"----";
        swapvalues(nums[0],nums[i]);
        heapify(nums,i-1,i-1,0);
    }
}

func()
{
  int n;
  cin>>n;
  vector<int> nums(n,0);
  for(int i=0;i<n;i++)
    cin>>nums[i];
 // heapify(nums,n-1,n-1,0);
    heap_sort(nums);
  cout<<"Sorted Arrays is "<<endl;
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

