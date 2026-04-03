class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n = word1.size();
        int m = word2.size();
        int iterate=0;
        if(n>m) iterate = n;
        else iterate = m;
        for(int i=0; i<iterate; i++){
            if(n>0){
                ans+= word1[i];
                n--;
            }
            if(m>0){
                ans+= word2[i];
                m--;
            }


        }
        // if(n>=0) ans.append(word1,)
        return ans;
    }
};