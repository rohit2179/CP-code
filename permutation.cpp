#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> nums, vector<vector<int> >& ans, int index){
	// base case
	if(index >= nums.size()){
		ans.push_back(nums);
		return;
	}

	for(int j = index; j<nums.size(); j++){
		swap(nums[index], nums[j]);
		permutation(nums,ans,index+1);
		//backtrack
		swap(nums[index], nums[j]);
	}
}
int main(){

	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	vector<vector<int>> ans;
	int index =0;
	permutation(nums,ans,index);
	for(auto i=0 ; i<ans.size() ; i++){
		for(auto j=0 ; j<3 ; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
		
	}
}