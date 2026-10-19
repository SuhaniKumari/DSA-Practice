//Find missing element in an array within min to max range
//Leetcode 3731...
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cout<<"enter size"<<endl;
    cin>>n;
    vector<int>nums(n);
    vector<int>ans;
    cout<<"enter array ele"<<endl;
    for(int i =0; i<n; i++){
        cin>>nums[i];
    }
     unordered_set<int>st(nums.begin(), nums.end());
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i =0; i<n; i++){
            mini = min(mini, nums[i]);
            maxi = max(maxi,nums[i]);
        }
        for(int i = mini+1;i<maxi;i++){
            if(st.find(i)== st.end() )
                ans.push_back(i);
        }
        
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
