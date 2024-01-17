#include<bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int> nums, int target)
{
 int l =0 ;int h = nums.size()-1;

 while(l<=h)
 {
    int mid = (l+h)/2;
    if(nums[mid]==target)
        return mid;

    if(nums[mid]>target)
        h = mid-1;
    else
        l = mid+1;
 }
    return -1;
}

int BinarySearchRec(vector<int> nums, int l , int h, int target)
{
    if(h<l || l<0 || h>=nums.size()) return -1;

    int mid  = (l+h)/2;

    if(nums[mid] == target)
        return mid;

    if(nums[mid]>target)
        return BinarySearchRec(nums,l,mid-1,target);

    else return BinarySearchRec(nums,mid+1,h,target);
}

int main()
{
 vector<int> nums{2,4,6,8,9,13,23,45};
 int target = 48;
 cout<<BinarySearch(nums,target)<<endl;
 cout<<BinarySearchRec(nums,0,7,target);
 return 1;
}
