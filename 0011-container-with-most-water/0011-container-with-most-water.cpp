class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int lp =0;
        int rp =n-1;
        while(lp<rp){
            int h = min(height[lp],height[rp]);
            int w = rp - lp;
            int area = h*w;
            ans = max(ans , area);

            height[lp]<height[rp]? lp++ : rp--;
        }
        return ans;



    }

};