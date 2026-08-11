class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> lcs;
        for(int n : nums){
            lcs.insert(n);
        }
        int longest=0;
        for(int x : lcs){
            if(!lcs.count(x-1)){
                int length=1;
                int current=x;
                while(lcs.count(current+1)){
                    length++;
                    current++;
                }
                longest=max(length, longest);
            }
        }
        return longest;
    }
};
