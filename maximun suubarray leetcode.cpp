class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;

        int maax=INT_MIN;
        for(auto it:nums)
        {
            sum+= it;
            maax=max(sum,maax);
            if(sum < 0) sum=0;
        }
        return maax;
    }
};
