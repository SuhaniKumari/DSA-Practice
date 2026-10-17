#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter num";
    cin>>n;
     cout<<"UP stairs pattern"<<endl;
    for(int i = 1; i<=n; i++){
        for(int j= 0; j<i; j++){
            cout<<"*";
        }
        
         cout<<endl;
    }
    cout<<"DOWN STAIRS"<<endl;
    for(int i = 0; i<n; i++){
        for(int j= 0; j<=n-i; j++){
            cout<<"*";
        }
        
         cout<<endl;
    }
    cout<<"AB pattern"<<endl;
    for(int i =1; i<=n; i++){
        for(int j =0; j<i; j++){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
     cout<<"A BB CCC pattern"<<endl;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<char('A'+i-1);
        }
        cout<<endl;
    }
     cout<<"PYRAMID pattern"<<endl;
    for(int i = 1; i<=n; i++){
        //spaces
        for(int j = 1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k= 1; k<= 2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"DIAMOND PATTERN"<<endl;
    for(int i = 1; i<=n; i++){
        //spaces
        for(int j = 1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k= 1; k<= 2*i-1; k++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    for(int i = n-1; i>=1; i--){
        //spaces
        for(int j = 1; j<=n-i;j++){
            cout<<" ";
        }
        for(int k= 1; k<= 2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"even number of stars"<<endl;
     for(int i =1; i<=n; i++){
         if(i ==1){
             cout<<"*";
         }
         else{
              for(int j =1; j<= 2*(i-1); j++){
            cout<<"*";
        }
         }
       
        cout<<endl;
    }
    cout<<"0dd number of stars"<<endl;
     for(int i =1; i<=n; i++){
         if(i ==1){
             cout<<"*";
         }
         else{
              for(int j =1; j<= 2*(i-1) +1; j++){
            cout<<"*";
        }
         }
       
        cout<<endl;
    }
   
}
