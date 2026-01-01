#include <iostream>
#include <vector>
using namespace std;

void solution(vector<int>& nums)
{
int n=nums.size();
int i=0;
for (int j=0; j<n;j++)
{
    if(nums[j]!=0)
    {
        if(i!=j)
        {
            nums[i]=nums[j]^nums[i];
            nums[j]=nums[j]^nums[i];
            nums[i]=nums[j]^nums[i];
        }
        i++;
    }
}
};
int main()
{
vector<int> nums={1,0,2,0,5,3,4};
solution(nums);
for(int i=0;i<nums.size();i++)
{
    cout<<nums[i]<<" ";
}
return 0;
}