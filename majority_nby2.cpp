class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //method1.bruteforce..count frequency using 2 loop
        
        //method1.sorting
        /*
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
        */
        //methood 3. map(element ,frequency)
        /*
        unordered_map<int,int> mp;
        for(auto ele:nums)
        {
            mp[ele]++;
         }
        int ans;
        for(auto it:mp)
        {
           if(it.second>nums.size()/2)
           {
            
               ans=it.first;
               break;
           }   
         }
        return ans;
        */
        //method optimal...moore vote algo
        int num=0,count=0;
        for(auto ele:nums)
        {
            if(count==0)
                num=ele;
            if(ele==num)count++;
            else count--;
        }
        //find actual count of num
        count=0;
        for(auto ele:nums)
        {
            if(ele==num)
                count++;
        }
        if(count>nums.size()/2) return num;
        else return -1;
        
    }
};
