//
// Created by Hitesh Agarwal on 15-02-2021.
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
    int x; cin>>x;
    // Find leftmost element
    int l=0, r=n-1, mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==x && (mid==0 || arr[mid-1]!=x)) { cout << mid << " "; break; }
        else if(arr[mid]>=x) r=mid-1;
        else l=mid+1;
    }
    // Find rightmost element
    l=0, r=n-1, mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==x && (mid==n-1 || arr[mid+1]!=x)) { cout << mid; break; }
        else if(arr[mid]<=x) l=mid+1;
        else r=mid-1;
    }


    return 0;
}