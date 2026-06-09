class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char, int> map;
      int left=0;
      int right=0;
      int ans=0;

      for(right=0;right<s.size();right++){
        if(map.count(s[right]) && map[s[right]]>=left){
            left=map[s[right]]+1;
        }
        map[s[right]]=right;
        ans= max(ans , right-left+1);
      }
        return ans;
    }
};