#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr,int target){
    int start=0,end=arr.size()-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) end=mid-1;
        else if(arr[mid]<target) start=mid+1;
    }
    return -1;
}
int main(){
    vector<int> arr={1,3,5,6,7,9,10,12};
    int target;
    cout<<"Enter the data you want to find"<<endl;
    cin>>target;
    cout<<binarySearch(arr,target);
}