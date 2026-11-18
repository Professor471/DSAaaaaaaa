class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> f;
        for (char c : s) f[c]++;

        int res = 0;
        bool odd = false;

        for (auto i : f) {
            res += i.second / 2 * 2;
            if (i.second % 2 == 1) odd = true;
        }
        return res + (odd ? 1 : 0);
    }
};