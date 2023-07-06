#include<bits/stdc++.h>

// In Place Sorting
// Stable Sorting
// Time Complexity O(n*n)
// Best Time Complexity O(n)


using namespace std;

void Display(vector<int> nums)
{
for(auto x:nums)
    cout<<" "<<x;
cout<<endl;
}

void BubbleSort(vector<int> &nums)
{
    int n;
    n = nums.size();
    for(int i=0;i<n;i++)
    { int flag=0;
      for(int k=0,j=1;j<n-i;j++,k++)
      {
        if(nums[k]>nums[j])
        {   flag = 1;
            int temp = nums[k];
            nums[k] = nums[j];
            nums[j] = temp;
        }
      }
      cout<<"After pass "<<i+1<<endl;
      Display(nums);
      if(!flag)
        break;
    }
}

void func()
{
    vector<int> nums;
    int n,z ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>z;
    nums.push_back(z);
    }
    BubbleSort(nums);
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
