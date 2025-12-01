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
<<<<<<< HEAD
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
=======
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
>>>>>>> 703323de5d7a5bca570f5324c4af196f4d1e4887
                }
            }
        }
        return prefix;
    }
};

int main()
{
<<<<<<< HEAD
    vector<string> strs = { "cir","car" };
=======
    vector<string> strs = { "flower","flow","flight" };
>>>>>>> 703323de5d7a5bca570f5324c4af196f4d1e4887

    Solution Solution;

    std::cout << Solution.longestCommonPrefix(strs);



}