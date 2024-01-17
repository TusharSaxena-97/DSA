#include<bits/stdc++.h>

using namespace std;

BinarySearch(vector<int> nums, int target)
{
 int l =0 ;int h = nums.size()-1;
 while(l<h)
 {
    int mid = (l+h)/2;
    if(nums[mid]==target)
        return mid;

    if(nums[mid]>target)
        h = mid-1;
    else
        l = mid;
 }
    return -1;
}

int main()
{
 vector<int> nums{2,4,6,8,9,13,23,45};
 int target = 9;
 cout<<BinarySerach(nums,target);
 //BinarySearchRec(nums,target);
 return 0;
}
