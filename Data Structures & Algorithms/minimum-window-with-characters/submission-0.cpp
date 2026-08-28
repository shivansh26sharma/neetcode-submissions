class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        int left=0;
        int minLen=INT_MAX;
        int startIndex=-1;
        int count=0;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        for(int right=0;right<s.size();right++){
            if(mp[s[right]]>0){
                count++;
            }
            mp[s[right]]--;
            while(count==t.size()){
                if((right-left+1)<minLen){
                    minLen=right-left+1;
                    startIndex=left;  
                }
                mp[s[left]]++;
                if(mp[s[left]]>0){
                    count--;
                }
                left++;
            }
        }
        return startIndex==-1?"":s.substr(startIndex, minLen);
    }
};
