#include <iostream>
#include <vector>


class Solution {

public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        for (int i = 0; i < n; ++i) {
            int n = nums2[i];
            for (int j = nums1.size() - 1; j >= 0; j--) {
                int n2 = nums1[j];
                
                if (n2 != 0) {
                    if (n <= n2) {
                        int aux = n2; 
                        nums1[j] = n; 
                        nums1[j + 1] = aux; 
                    }
                    else {
                        int aux = n; 
                        nums1[j] = n2; 
                        nums1[j + 1] = aux; 
                        break;
                    }
                }


            }
        }
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