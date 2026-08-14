class Solution {
public:
    bool isPalindrome(string s) {
        string palin;
        for(char c : s){
            if(isalnum(c)){
                palin.push_back(tolower(c));
            }
        }
        for(int i=0;i<palin.size();i++){
            if(palin[i]==palin[palin.size()-i-1]) continue;
            else return false;
        }
        return true;
    }
};
