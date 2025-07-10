#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k){
    unordered_map<int,int>map;
    for(int num:nums) map[num]++;
    priority_queue<pair<int,int>>maxheap;
    for(auto& [num,freq]:map){ 
        maxheap.push({freq,num});
    }
}