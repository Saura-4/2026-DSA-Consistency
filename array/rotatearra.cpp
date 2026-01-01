#include<iostream>
#include<vector>

using namespace std;

void reverse(vector<int>& nums,int start,int end)
{
    while(start<end)
    {
        nums[start]=nums[start]^nums[end];
        nums[end]=nums[start]^nums[end];
        nums[start]=nums[start]^nums[end];
        start++;
        end--;
    }
};
void solver(vector<int>& nums, int k)
{
    int n=nums.size();
    
    if(k==0 || k==n)return;
    k=k%n;

    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
};

int main()
{
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    solver(nums,k);
    for(auto i: nums)
    {
        cout<< i<<" ";
    }
}