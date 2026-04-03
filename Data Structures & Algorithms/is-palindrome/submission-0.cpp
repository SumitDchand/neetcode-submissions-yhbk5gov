class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0; i<s.size(); i++){
            // ('0'<=s[i]<='9' || 'A'<=s[i]<='Z' || 'a'<=s[i]<='z')
            //we cannont use like this use &&
            if('0'<=s[i] && s[i]<='9' || 'A'<=s[i]&& s[i]<='Z' || 'a'<=s[i] && s[i]<='z'){
                temp += tolower(s[i]);
                // Without tolower:

                // 'A' != 'a' 

                //  With tolower:

                // 'a' == 'a' 
                //to_string('a')= "97" store krega ascii value
            }
        }
        int i=0, j=temp.size()-1;
        while(i<=j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++;
            j--;

        }
        return true;
    }
};
