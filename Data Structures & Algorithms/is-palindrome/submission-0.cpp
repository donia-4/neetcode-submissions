class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char c : s){
            if((tolower(c) >= 'a' && tolower(c) <= 'z')
            || (c >= '0' && c<= '9')){
                res += tolower(c);
            }
        }
        int l = 0,r = res.size()-1;
        while(l<=r){
            if(res[l]!=res[r])return false;
            ++l;
            --r;
        }
        return true;
    }
};
