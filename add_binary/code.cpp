class Solution {
public:
    string addBinary(const string &a, const string &b) {
        assert(!a.empty() && !b.empty());

        vector<char> res;
    
        for(
            int carry = 0, i = a.size()-1, j = b.size()-1;
            carry > 0 || i >= 0 || j >= 0;
            --i,
            --j
        ){
            int sum = carry + (i >= 0 ? a[i] - '0' : 0) + 
                              (j >= 0 ? b[j] - '0' : 0);
            res.push_back(char(sum % 2 + '0'));
            carry = sum / 2;
        }
        assert(!res.empty());
        return string(res.rbegin(),res.rend());
    }
};
