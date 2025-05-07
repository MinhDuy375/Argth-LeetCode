#include <vector>
#include <algorithm>
#include <iostream>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> charVec(s.begin(), s.end());
        vector<char> subStr;
        for(int i=0;i<charVec.size();i++){
            for(auto j = charVec.begin(); j != subStr.end();++j){
                if(charVec[i]!= subStr[j]){
                    subStr.push_back(charVec[i]);
                }
            }
        }
    }
};