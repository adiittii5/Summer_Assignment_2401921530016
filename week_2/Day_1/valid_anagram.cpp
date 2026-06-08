class Solution {
public:
    bool isAnagram(string s, string t) {
        int bucketArray[26]={0};

        if(s.size()!=t.size()) return false;

        for(char c: s){
            bucketArray[c- 'a']++;
        }

        for(char c: t){
            bucketArray[c- 'a']--;
        }
        for(int x: bucketArray){
            if(x!=0) return false;
        }
        return true;
    }
};