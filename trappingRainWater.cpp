class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,max_l=height[l],max_r=height[r];
        int cnt=0;
        while(l<r)
        {
            if(max_l<max_r)
            {
                l++;
                if(height[l]<max_l)
                    cnt+=max_l-height[l];
                else
                    max_l=height[l];
            }
            else 
            {
                r--;
                if(height[r]<max_r)
                    cnt+=max_r-height[r];
                else
                    max_r=height[r];
            }
        }
        return cnt;
    }
};
