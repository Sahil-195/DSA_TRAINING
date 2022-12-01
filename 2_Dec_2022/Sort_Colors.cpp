#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int l = 0,m = 0,h = nums.size()-1;
        while(m<=h) {
            if(nums[m]==0) {
                swap(nums[l],nums[m]);
                l += 1;
                m += 1;
             }
            else if(nums[m]==2) {
                swap(nums[m],nums[h]);
                h -= 1;
            }
            else
                m += 1;
        }
    }
};