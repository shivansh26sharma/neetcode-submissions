class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word="";
        int s1=word1.size();
        int s2=word2.size();
        int i=0, j=0;
        for(int s=0;s<s1+s2;s++){
            if(s%2==0){
                if(i<s1){
                    word+=word1[i++];
                }
                else{
                    word+=word2[j++];
                }
            }
            else{
                if(j<s2){
                    word+=word2[j++];
                }
                else{
                    word+=word1[i++];
                }
            }
        }
        return word;
    }
};