#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void combination(vector<int> &candidates, int target, int i, vector<vector<int>> &vv, vector<int> &v){
            if(target == 0){
                vv.push_back(v);
                return;
            }
            if(target<0){
            	return;
            }
            for(int j=i;j<candidates.size();j++){
                v.push_back(candidates[j]);
                combination(candidates, target-candidates[j],j, vv,v);
                v.pop_back();
            }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int> > vv;
        vector<int> v;
        combination(candidates, target, 0, vv, v);
        return vv;
}
int main(){
	vector<int> a{2,3,5};
	vector<vector<int>> vv = combinationSum(a, 8);
	for(vector<int> v: vv){
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
