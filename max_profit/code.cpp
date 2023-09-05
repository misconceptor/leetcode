class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curmin = INT_MAX;
        int maxdif = 0;
        for(int i=0; i<prices.size(); ++i){
            curmin = min(curmin,prices[i]);
            maxdif = max(maxdif,prices[i]-curmin);
        }
        return maxdif;
    }
};
