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
\\stack solution
class Solution {
public:
    int trap(vector<int>& height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size()) {
        while (!st.empty() && height[current] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int distance = current - st.top() - 1;
            int bounded_height = min(height[current], height[st.top()]) - height[top];
            ans += distance * bounded_height;
        }
        st.push(current++);
    }
    return ans;
}
