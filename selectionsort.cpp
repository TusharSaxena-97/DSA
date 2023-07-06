#include<bits/stdc++.h>


//Its is an unstable sorting Algorithm
//It has time Complexity  = O(n*n)
//Okay for smaller data sets.
//Has to perform many swaps even for almost sorted Datasets

using namespace std;

void display(vector<int> nums)
{
 for(auto x:nums)
        cout<<" "<<x;
cout<<endl;
}

void swapnums(vector<int> &nums, int i, int key)
{
  int temp;
  temp = nums[key];
  nums[key] = nums[i];
  nums[i] = temp;
}

vector<int> SelectionSort(vector<int> nums)
{
  int n,key;
  n = nums.size();
  for(int i=0;i<n-1;i++)
  {
   key=i;
   for(int j=i;j<n;j++)
   {
    if(nums[j]<nums[key])
        key = j;
   }
    swapnums(nums,i,key);
    cout<<"After pass"<<i<<endl;
    display(nums);
  }
    return nums;
}

int main()
{
    vector<int> nums;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
     int z;
     cin>>z;
     nums.push_back(z);
    }
    nums = SelectionSort(nums);
    display(nums);
    return 0;
}
