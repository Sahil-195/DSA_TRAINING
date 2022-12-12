#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0,e = n-1;
        int m = s + (e-s)/2;
        while(s<=e) {
            if(nums[m]==target) {
                return m;
            } 
            else if(nums[s]<=nums[m]) {
                if(target>=nums[s] && target<nums[m]) {
                    e = m - 1;
                }
                else {
                    s = m + 1;
                }
            }
            else {
                if(target<=nums[e] && target>nums[m]) {
                    s = m + 1;
                }
                else {
                    e = m - 1;
                }
            }
            m = s + (e-s)/2;  
        }
        return -1;
    }
};