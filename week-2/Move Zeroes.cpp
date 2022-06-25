class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        long long int i,j=0,res,count=0;

        //vector<long long int>ans;

        for( i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }


        }
        for(i=j;i<nums.size();i++)
            nums[i]=0;
        //return nums;


    }
};
