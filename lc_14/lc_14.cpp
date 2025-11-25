#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int c = 0;
       
            for (int x = 1; x < strs.size(); x++) {
                c = 0;
                    for (int j = 0; j < strs[x].size(); j++) {
                            if (strs[x][j] == prefix[j] && prefix[j] && prefix[j] == strs[x][j] && prefix[j] != NULL) {
                                prefix.push_back(strs[x][j]);
                            }
                            else {
                                prefix.pop_back();
                                break;
                            }
                }
            }
            return prefix;
    }
};

int main()
{
    vector<string> strs = { "flower", "flow", "flight" };

    Solution Solution;

    std::cout << Solution.longestCommonPrefix(strs);



}

