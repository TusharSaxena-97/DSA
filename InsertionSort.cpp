#include<bits/stdc++.h>

using namespace std;

//InPlace Sorting Algorithm
//Stable Sorting Algorithm
//TimeComplexity O(n*n)
//Worst Case O(n*n)


void Display(vector<int> nums)
{
 for(auto  x:nums)
    cout<<" "<<x;
 cout<<endl;
}
void swapnums(vector<int> &nums,int a,int b)
{
    int temp;
    temp=nums[a];
    nums[a]  = nums[b];
    nums[b] = temp;

}

void InsertionSort(vector<int> &nums)
{
    int n;
    n = nums.size();
    for(int i=1;i<n;i++)
    {
        int key=i;
        for(int j=0;j<i;j++){
            if(nums[j]>nums[i]){
              key = j-1;
              break;
            }
        }
        if(key<i)
            for(int m=i;m>key+1;m--)
                swapnums(nums,m,m-1);

        cout<<"After Pass "<<i+1<<endl;
        Display(nums);
    }

}

void func()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    InsertionSort(nums);
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


for(int i=0;i<n-1;i++)
{
  for(j=i+1;j<n-i;j++)
  {
     if(arr[i]>arr[j])
        swap(arr[i],arr[j]);
  }
}

for(int i=0;i<n-1;i++)
{
  int mini = arr[i];
  for(int j=i+1;j<n;j++)
        if(arr[j]<mini)
                index = j;

  swap(arr[i],arr[index]);
}
