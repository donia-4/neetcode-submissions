class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int, int>> freq(2001, {0, 0});
        int n = nums.size();
        for(int i = 0;i<n;++i){
            freq[nums[i]+1000].first++;
            freq[nums[i]+1000].second = nums[i];
        }
        sort(freq.rbegin(),freq.rend());
        vector<int> ans;
        for(int i = 0;i<k;++i){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};
