class Solution {
public:
    int firstUniqChar(string s) {
        int bucket[26]={0};
        for(char c:s){
            bucket[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(bucket[s[i]-'a']==1){
                return i;

            }
        }
        return -1;
    }
};