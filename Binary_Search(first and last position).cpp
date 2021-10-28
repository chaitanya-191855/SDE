 vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1, -1};
        
        int l=0, r=(int)nums.size()-1;
        
        while (l <= r) {
            int mid = (l+r)/2;
            if (nums[mid] >= target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        if (l >= nums.size() || nums[l] != target) return {-1, -1};
        
        int leftPos = l;
        l = 0; r=nums.size()-1;
        
        while (l <= r) {
            int mid = (l+r)/2;
            
            if (nums[mid] <= target) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        
        return {leftPos, r};
    }
