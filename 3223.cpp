// https://leetcode.com/problems/minimum-length-of-string-after-operations/description/?envType=daily-question&envId=2025-01-13

class Solution {
public:
    int minimumLength(string s) {
        vector <int> freq (26,0);

        for(int i = 0;i < s.length();i++){
            int temp = static_cast<int>(s[i] - 'a');
            freq[temp]++;
        }

        int ans = 0;

        for(int i = 0;i < 26;i++){
            if(freq[i] < 3){
                ans += freq[i];
            }
            else{
                if(freq[i] % 2 == 0){
                    ans += 2;
                }
                else{
                    ans += 1;
                }
            }
        }
        return ans;
    }
};


///////////////////////////////// unOptimized solution
// class Solution {
// public:
//     int minimumLength(string s) {
//         bool found = true;
//         while (found && s.length() > 0) {
//             found = false;
//             for (int i = 0; i < s.length(); i++) {
//                 int left = -1;
//                 for (int j = i-1; j >= 0; j--) {
//                     if (s[j] == s[i]) {
//                         left = j;
//                         break;
//                     }
//                 }
                
//                 int right = -1;
//                 for (int j = i+1; j < s.length(); j++) {
//                     if (s[j] == s[i]) {
//                         right = j;
//                         break;
//                     }
//                 }
                
//                 if (left != -1 && right != -1) {
//                     s.erase(right, 1);
//                     s.erase(left, 1);
//                     if (left < i) i--;
//                     found = true;
//                     break;
//                 }
//             }
//         }
//         return s.length();
//     }
// };


// class Solution {
// public:
//     int minimumLength(string s) {
//         int n = s.length();
//         for (int i = 0; i < s.length(); i++) {
//             if (count(s.begin(), s.end(), s[i]) >= 3) {
//                 int done = 0;
//                 char target = s[i];
//                 for (int j = 0; j < s.length() && done <= 2; j++) {
//                     if (s[j] == target) {
//                         // cout << "Done for " << s[j] << " is : " << done << endl;
//                         if (!(done & 1)) {
//                             // cout << "Erasing at : " << j << endl;
//                             s.erase(j, 1);
//                             // cout << s << endl;
//                             j--;
//                         }
//                         done++;
//                     }
//                 }
//                 if(done)
//                     i--;
//             }
//         }
//         return s.length();
//     }
// };