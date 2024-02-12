#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int>& arr,int target){
    int start=0,end=arr.size()-1,mid,ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target) start=mid+1;
        else if(arr[mid]>target) end=mid-1;   
    }
    return ans;
}
int lastOccurence(vector<int>& arr,int target){
    int start=0,end=arr.size()-1,mid,ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>target) end=mid-1;
        else if(arr[mid]<target) start=mid-1;
    }
    return ans;
}
int findTotalOccurence(vector<int>& arr,int target) {
  int firstOcc = firstOccurence(arr,target);
  int lastOcc = lastOccurence(arr,target);
  int total = lastOcc - firstOcc +1 ;
  return total;
}
int main(){
    vector<int> arr={0,1,2,3,4,4,4,4,5,6,7};
    int target=4;
    cout<<firstOccurence(arr,target)<<endl;
    cout<<lastOccurence(arr,target)<<endl;
    cout<<findTotalOccurence(arr,target);
}