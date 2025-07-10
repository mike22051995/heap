#include<iostream>
#include<queue>
#include<vector>

using namespace std;
int kthSmallest(vector<vector<int>>& matrix, int k){
    priority_queue<int>maxheap;
    int n=matrix.size();
    for(int i=0;i<n*n;++i){
        maxheap.push(matrix[i/n][i%n]);
        if(maxheap.size()>k) maxheap.pop();
    }
    return maxheap.top();
}

int main(){
    vector<vector<int>>matrix={{1,5,9},{10,11,13},{12,13,15}};
    int k=8;
    cout<<kthSmallest(matrix,k)<<endl;
    return 0;
}