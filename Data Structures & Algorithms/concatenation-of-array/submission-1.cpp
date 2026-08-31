class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // Method - 1 Iteration (Two Pass)
        // vector<int> ans;
        // {
        //     for(int i =0; i < 2; i++)
        //     {
        //         for(int num:nums)
        //         {
        //             ans.push_back(num);
        //         }
        //     }
        //     return ans;
        // }

        // Method 2 - Iteration (One Pass)
        int n =nums.size();
        vector<int> ans(2*n);
        for(int i=0; i<n; i++){
            ans[i] = ans[i+n] = nums[i];
        } return ans;
    }
};