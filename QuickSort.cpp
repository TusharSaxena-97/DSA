#include<bits/stdc++.h>

using namespace std;

void Display(vector<int> nums)
{
 for(auto x:nums)
    cout<<x<<" ";
 cout<<endl;
}

void swapnums(vector<int> &nums, int i, int key)
{
  int temp;
  temp = nums[key];
  nums[key] = nums[i];
  nums[i] = temp;
}

int Partition(vector<int> nums,int l, int h)
{
    int i=l,j=h;
    int pe=nums[l];

    while(i<j)
    {
        do{i++;}while(nums[i]<=pe);
       // i++;

        do{j--;}while(nums[i]>pe);
        //j--;
     if(i<j)
        swapnums(nums,i,j);
    }
    return j;
}

void QuickSort(vector<int> &nums,int l, int h)
{
    if(l<h){
    int key = Partition(nums,l,h);
    QuickSort(nums,l,key);
    QuickSort(nums,key+1,h);
    }
}

void func(){
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    QuickSort(nums,0,nums.size()-1);
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
