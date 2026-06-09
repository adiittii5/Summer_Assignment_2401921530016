class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         vector<int> ans;

        int n = s.size(), m = p.size();
        if (n < m) return ans;

        vector<int> countP(26, 0), countS(26, 0);

        for (char c : p)
            countP[c - 'a']++;

        for (int i = 0; i < m; i++)
            countS[s[i] - 'a']++;

        if (countS == countP)
            ans.push_back(0);

        for (int i = m; i < n; i++) {
            countS[s[i] - 'a']++;        
            countS[s[i - m] - 'a']--;    

            if (countS == countP)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};