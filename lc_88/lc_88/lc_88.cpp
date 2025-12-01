#include <iostream>
#include <vector>
#include <algorithm>



class Solution {

public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

            for (int i = 0; i < n; i++) {
                    int n = nums2[i];
                        
                    for (int j = 0; j <= nums1.size(); j++) {
                            int n2 = nums1[j];
                            if (nums1[j] == 0) {
                                nums1[j] = n;
                                break;
                            }

                        }      
             }
            std::sort(nums1.begin(), nums1.end());      
        for (int j = 0; j <= nums1.size()-1; j++)
        {
            std::cout << nums1[j];
        }

    }
};


int main()
{
    std::vector<int> nums1 = { 1,2,3,0,0,0 };
    int m = 3;
    std::vector<int> nums2 = { 2,5,6 };
    int n = 3;

    Solution S;

    S.merge(nums1, m, nums2, n);


}