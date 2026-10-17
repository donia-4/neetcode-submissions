class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0;
        unordered_map<char,int> um;
        int res = 0;
        while(r<n){
            um[s[r]]++;
            while(um[s[r]]>1 && l<r){
                um[s[l]]--;
                ++l;
            }
            ++r;
            res = max(res,r-l);
        }
        return res;
    }
};
