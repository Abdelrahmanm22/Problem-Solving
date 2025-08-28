class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        if (words.empty()) return ans;

        vector<map<char, int>> vec(words.size());

        for (int i = 0; i < words.size(); ++i) {
            for (char ch : words[i]) {
                vec[i][ch]++;
            }
        }

        // Find common characters with their minimum counts
        map<char, int> minCount;
        for (auto& kv : vec[0]) {
            char ch = kv.first;
            int count = kv.second;
            for (int i = 1; i < vec.size(); ++i) {
                if (vec[i].find(ch) != vec[i].end()) {
                    count = min(count, vec[i][ch]);
                } else {
                    count = 0;
                    break;
                }
            }
            if (count > 0) {
                minCount[ch] = count;
            }
        }
        for (auto& kv : minCount) {
            char ch = kv.first;
            int count = kv.second;
            for (int i = 0; i < count; ++i) {
                ans.push_back(string(1, ch));
            }
        }
        return ans;
    }
};