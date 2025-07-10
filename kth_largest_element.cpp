#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k){
    priority_queue<int,vector<int>, greater<int>>minheap;
    for(int i=0;i<nums.size();++i){
        minheap.push(nums[i]);
        if(minheap.size()>k){
            minheap.pop();
        }

    }
    return minheap.top();

}

int main(){
    vector<int>nums={2,4,5,8,12,11,45,43,23,98,100};
    
    int k=4;
    cout<<findKthLargest(nums,k)<<endl;
    return 0;
}