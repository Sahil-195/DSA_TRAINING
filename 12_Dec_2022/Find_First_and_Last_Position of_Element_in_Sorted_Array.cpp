#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
   
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int size = nums.size();
        int s = 0;
        int e = size-1;
        int m = s +( e-s)/2;
        vector<int> ans;
        int temp1  =-1,temp2=-1;
        while(s<=e) {
            if(nums[m]==target) {
                temp1 = m;
                e = m -1;
            }
            else if(nums[m]>target) {
                e = m -1;
            }
            else {
                s = m + 1;
            }
            m = s +( e-s)/2; 
            
        }
        s=0;
        e=size-1;
        m = s +( e-s)/2;
        while(s<=e) {
            if(nums[m]==target) {
                temp2 = m;
                s = m + 1;
            }
            else if(nums[m]>target) {
                e = m -1;
            }
            else
                s = m + 1;
            m = s +( e-s)/2; 
            }
        
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
        
    }
};