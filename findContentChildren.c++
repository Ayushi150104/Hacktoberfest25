class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        int i = 0, j = 0;  // i -> greed index, j -> size index

        sort(g.begin(), g.end());  // sort greed array
        sort(s.begin(), s.end());    // sort size array

        int ans = 0;
        while (i < n && j < m) {
            if (g[i] <= s[j]) {  // if this cookie can satisfy this child
                ans++;
                i++;
                j++;
            } else {
                j++;  // try bigger cookie
            }
        }
        return ans;
    }
};
