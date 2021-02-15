//
// Created by Hitesh Agarwal on 14-02-2021.
//

#include<bits/stdc++.h>
using namespace std;

void majorityElement(int arr[], int n){
    int flag=0; unordered_map<int,int>m;
    for(int i=0; i<n; i++) m[arr[i]]++;
    for(auto i:m) if(i.second>n/2) {cout << i.first << " "; flag=1;}
    if(!flag) cout<<"No Majority Element";
}


int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    majorityElement(arr,n);


    return 0;
}