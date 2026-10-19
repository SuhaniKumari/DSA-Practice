//Find maximum number of consecutive ones
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
     int maxi = 0;
     int c=0;
        
        for(int i =0; i<n; i++){
            
            if(nums[i] == 1){
                c++;
                 maxi = max(maxi,c); 
            }
           else
            c=0;
       
        }
        cout<< maxi;
    
}
