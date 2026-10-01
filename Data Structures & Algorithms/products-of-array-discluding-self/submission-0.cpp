class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        pair<int,int> freqOfZero{0,0};
        bool isMultipleZeros = false;
        bool containsZero = false;
        for(int i = 0;i<n;++i){
            if(nums[i]==0){
                freqOfZero.second++;
                containsZero = true;
            }
            if(freqOfZero.second>1){
                isMultipleZeros = true;
                break;
            }
        }
        vector<int>  res;
        if(isMultipleZeros){
            for(int i = 0;i<n;++i){
                res.push_back(0);
            }
        }else{
            long long p = 1;
            for(int i = 0;i<n;++i){
                if(nums[i]!=0)p*=nums[i];
            }
            for(int i = 0;i<n;++i){
                if(nums[i]!=0 && containsZero){
                    res.push_back(0);
                }else if(nums[i]!=0 && !containsZero){
                    res.push_back(p/nums[i]);
                }
                else{
                    res.push_back(p);
                }
            }
        }
        return res;
    }

};
