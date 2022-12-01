#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr,arr+n);
        int cd = arr[1]-arr[0];
        int c = 0;
        for(int i=0;i<n-1;i++) {
            if(arr[i+1]-arr[i]==cd)
                c++;
        }
        if(c==(n-1))
        return 1;
        return 0;
        
    }

};