class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefix;
        prefix[0]=1;
        int sum=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            if(prefix.find(sum-k)!=prefix.end())
            {
                c+=prefix[sum-k];
                
             }
            prefix[sum]++;
            
        }
        return c;
    }
};
