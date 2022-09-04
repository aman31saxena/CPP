#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	return 0;
}
    

bool canJump(vector<int>& nums) {
        int n = nums.size(), reach = 0;
        for(int i=0;i<n && i<=reach;i++) {
            reach = max(reach, i+nums[i]);
            if(i+nums[i] >= n -1) return true;
        }
        return false;
}
