#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    //"cir","car"
    //"flower","flow","flight"
    //"dog","racecar","car"
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
            for (int x = 1; x < strs.size(); x++) {
                for (int j = 0; j < prefix.size(); j++) {
                    if (strs[x][0] != prefix[0]){
                        prefix = "";
                        break;
                    }
                
                    char a = strs[x][j];
                    char b = prefix[j];

                        if(a != b) {
                            //no esta mal, pero habria que hacer una revision de cuantos caracteres coinciden y de ahi hacer una regresion
                            //
                            int res = std::abs((int)strs[x].size() - (int)prefix.size());
                                for (int r = 0; r < res; r++)
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
    vector<string> strs = { "flower","flow","flight" };

    Solution Solution;

    std::cout << Solution.longestCommonPrefix(strs);



}

