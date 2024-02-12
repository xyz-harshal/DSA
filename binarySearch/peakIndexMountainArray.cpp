#include<iostream>
#include<vector>
using namespace std;
//852. Peak Index in a Mountain Array
//Leetcode problem
int peakIndex(vector<int>& arr){
    int start=0,end=arr.size()-1,mid;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1]){
            end=mid;
        }
        else start=mid+1;
    }
    return end;
}
int main(){
    vector<int> arr={0,1,3,2,1};
    cout<<peakIndex(arr);
}