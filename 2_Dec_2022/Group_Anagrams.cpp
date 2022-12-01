#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int size = strs.size();
        int arr[10000][26] = {0};
        vector<vector<string>> ans;
        vector<string> a;
        vector<int> b;
        string temp;
        
        for(int i=0;i<size;i++) {
            temp = strs[i];
            for(int j=0;j<temp.size();j++) {
                arr[i][temp[j]-'a']++;
            }
        }
        
        int i=0,j=0,k=0,z=0;
        
        for(i=0;i<size;i++) {
            for(k=0;k<b.size();k++) {
                if(b[k]==i)
                    break;
            }
            if(k!=b.size())
                continue;
            a.push_back(strs[i]);
            for(j=i+1;j<size;j++) {
                for(z=0;z<26;z++) {
                    if(arr[i][z]!=arr[j][z])
                        break;
                }
                if(z==26) {
                    a.push_back(strs[j]);
                    b.push_back(j);
                }
            }
        
            ans.push_back(a);
            a.clear();
    }
        return ans;
        
    }
};