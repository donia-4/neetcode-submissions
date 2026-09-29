class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        unordered_map<int,int> mp1,mp2;
        int n = s.size();
        for(int i = 0;i<n;++i){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        int m1 = mp1.size(), m2 = mp2.size();
        if(m1!=m2) return false;
        for(int i = 0;i<n;++i){
            int c = s[i];
            if(mp1[c] != mp2[c])return false;
        }
        return true;
    }
};
