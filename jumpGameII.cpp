    int jump(vector<int>& nums) {
        int curFarthest = 0, jumps = 0, curEnd=0;
        for(int i=0;i<nums.size() -1;i++) {
            curFarthest = max(curFarthest, i + nums[i]);
            if(i == curEnd) {
                jumps++;
                curEnd = curFarthest;
            }
        }
        return jumps;
    }
