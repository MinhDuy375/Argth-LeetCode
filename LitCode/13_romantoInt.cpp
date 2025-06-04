class Solution {
public:
	int romanToInt(string s) {
		int result = 0;
		unordered_map<char, int> rotoint = {
			{'I', 1},{'V', 5},{'X', 10},{'L', 50},
			{'C', 100},{'D', 500},{'M', 1000}
		};
		for (int i = 0; i < s.size() - 1; i++) {
			if (rotoint[s[i]] < rotoint[s[i + 1]]) {
				result -= rotoint[s[i]];
				else {
					result += rotoint[s[i]];
				}
			}

			return result + rotoint[s[s.size() - 1]];
			;
		}
	};