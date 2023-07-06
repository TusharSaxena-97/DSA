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
    int tmp=a;
    a=b;
    b=tmp;
}

void heap_insert(vector<int> &nums, int n, int is_swapped)
{
    if(n>nums.size())
        return;

    //Display(nums);
    int smallest=n;
    int parent=n/2;

    if(parent>0 && nums[parent]<nums[smallest])
        smallest = parent;

    if(smallest!=n)
    {
        swapvalues(nums[smallest],nums[n]);
        heap_insert(nums,parent,1);
    }
    if(is_swapped)
        return;
    heap_insert(nums,n+1,0);
}

void heap_delete(vector<int> &nums, int n,int i, int is_swapped)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;

    if(l<n && nums[l]>nums[largest])
        largest = l;
    if(r<n && nums[r]>nums[largest])
        largest = r;

    if(largest!=i)
    {
     swapvalues(nums[largest],nums[i]);
     heap_delete(nums,n,largest,1);
    }
}

void func()
{
 int n;
 cin>>n;
 vector<int> nums(n+1,0);

 for(int i=1;i<=n;i++)
  cin>>nums[i];

 heap_insert(nums,2,0);
 Display(nums);
 cout<<"Above is the Sorted Heap"<<endl;

 for(int i=1;i<=n;i++)
 {
  swapvalues(nums[1],nums[n+1-i]);
  Display(nums);
  heap_delete(nums,n+1-i,1,0);
  Display(nums);
 }
 Display(nums);
}


int main()
{
 int t;
 cin>>t;
 while(t--)
   func();
 return 0;
}
