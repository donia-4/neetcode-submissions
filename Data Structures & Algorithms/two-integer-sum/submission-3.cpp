class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> a(n);
        for(int i = 0;i<n;++i){
            a[i].first = nums[i];
            a[i].second = i;
        }
        sort(a.begin(),a.end());
        int l = 0, r = n-1;
        while(l<=r){
            long long sum = a[l].first + a[r].first;
            if (sum < target) ++l;
            else if (sum > target) --r;
            else{
                if(a[l].second < a[r].second) return {a[l].second,a[r].second};
                else return {a[r].second,a[l].second};
                ++l;
                --r;
            }
        }
    }
};
