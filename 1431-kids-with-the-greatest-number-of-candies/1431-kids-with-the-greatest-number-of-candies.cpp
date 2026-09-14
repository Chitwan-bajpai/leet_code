class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxEle=candies[0];
        for(int x:candies){
            if(x>maxEle){
                maxEle=x;
            }
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+ extraCandies<maxEle){
                ans.push_back(false);
            }
            else ans.push_back(true);
        }
        return ans;
    }
};