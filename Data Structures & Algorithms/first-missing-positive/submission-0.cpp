class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int pos=1;
        sort(nums.begin(), nums.end());
        for(int num : nums){
            if(num==pos){
                pos++;
            }
        }
        return pos;
    }
};