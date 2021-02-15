//
// Created by Hitesh Agarwal on 14-02-2021.
//

#include<bits/stdc++.h>
using namespace std;

int peakElement(int nums[], int n){
    for(int i=0; i<n; i++){
        if(i==0 && nums[i]>nums[i+1]) return nums[i];
        else if(i==n-1 && nums[i]>nums[i-1]) return nums[i];
        else if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) return nums[i];
    }
    return -1;
}


int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<peakElement(arr,n);


    return 0;
}