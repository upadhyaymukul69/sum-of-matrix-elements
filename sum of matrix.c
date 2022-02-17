#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long lrgl;

int main() { 
    lrgl s;
    cin>>s;
    while(s--){
        lrgl n;
        cin>>n;
        lrgl res=0;
        for(lrgl i=0;i<n;i++){
            for(lrgl j=0;j<n;j++){
                lrgl x;
                cin>>x;
                if(i==0 || j==0 || i==n-1 || j==n-1 || i==j || i+j==n-1){
                    res+=x;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
