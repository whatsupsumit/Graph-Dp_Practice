class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
    
        vector<vector<bool>> dp(n, vector<bool>(n, true));
      
        int startIndex = 0;  // Starting index of longest palindrome
        int maxLength = 1;   // Length of longest palindrome (at least 1)
      
        for (int i = n - 2; i >= 0; --i) {
            for (int j = i + 1; j < n; ++j) {
                dp[i][j] = false;
              
                // Check if first and last characters match
                if (s[i] == s[j]) {
            
                    dp[i][j] = dp[i + 1][j - 1];
                  
                    // Update longest palindrome if current one is longer
                    if (dp[i][j] && maxLength < j - i + 1) {
                        maxLength = j - i + 1;
                        startIndex = i;
                    }
                }
            }
        }
      
        // Return the longest palindromic substring
        return s.substr(startIndex, maxLength);
    }
};