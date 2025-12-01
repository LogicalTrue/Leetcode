#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int x = 1; x < strs.size(); x++) {
            for (int j = 0; j < prefix.size(); j++) {
                if (strs[x][0] != prefix[0]) {
                    prefix = "";
                    break;
                }

                char a = strs[x][j];
                char b = prefix[j];

                if (a != b) {
                    int c = 0;
                    for (int k = j; k < prefix.size(); k++)
                    {
						c++;
                    }

                    for (int r = 0; r < c; r++) {
                        prefix.pop_back();
                    }
                    break;
                }
            }
        }
        return prefix;
    }
};

int main()
{
    vector<string> strs = { "cir","car" };

    Solution Solution;

    std::cout << Solution.longestCommonPrefix(strs);



}