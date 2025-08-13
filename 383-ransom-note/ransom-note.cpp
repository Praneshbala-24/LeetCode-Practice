class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0); // store frequency of each letter
        
        // Count letters in magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }
        
        // Check if ransomNote can be formed
        for (char c : ransomNote) {
            if (--count[c - 'a'] < 0) {
                return false; // not enough of this letter
            }
        }
        return true;
    }
};
