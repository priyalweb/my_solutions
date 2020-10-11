#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count_here=0, max_so_far =0;		// kadanes algo
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                max_count_here++;
                if(max_so_far < max_count_here ){
                    max_so_far = max_count_here;
                }
            }
            else{
                max_count_here = 0;
            }
        }
        
        return max_so_far;
    }
};

int main(){
	Solution s1;
	int x;
	vector<int> nums = {1,0,1,1,1,1};
	
	cout<<s1.findMaxConsecutiveOnes(nums);
	
	return 0;
}
