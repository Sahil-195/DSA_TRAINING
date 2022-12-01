#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        long x=0;
        vector<int> ans;
        for(int i=0;i<n;i++) {
            x ^= nums[i];
        }
        int diff = x & (-x);
        int fnum = 0,snum = 0;
        for(int i=0;i<n;i++) {
            if(diff & nums[i])
                fnum ^= nums[i];
            else
                snum ^= nums[i];
        }
        
        return {fnum,snum};
        
    }
};