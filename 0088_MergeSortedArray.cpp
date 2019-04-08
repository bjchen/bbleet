#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m == 0 && n > 0) // if target array nums1 is empty
        {
            for (int i = 0; i < n; ++i)
                nums1[i] = nums2[i];
        }
        
        int i = m - 1;
        int j = n - 1;
        int k = (m + n) - 1; // merged size
        
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] >= nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
        }
        
        while (j >= 0) // the remainder source array nums2. 
            nums1[k--] = nums2[j--];
        
        for (int ia = 0; ia < m + n; ++ia)
            cout << nums1[ia] << endl;
        cout << "====" << endl;    
        
        return;
    }
};

int main()
{
    Solution *func;
    vector<int> nums1 = {2,3};
    vector<int> nums2 = {1};
    vector<int> result;
    
    int length1 = nums1.size();
    int length2 = nums2.size();
    
    cout << "length1: " << length1 << endl;
    cout << "length2: " << length2 << endl;
    cout << "output: " << endl;
    for (int i = 0; i < length1; ++i)
        cout << " " << nums1[i];
    cout << endl;
    for (int j = 0; j < length2; ++j)
        cout << " " << nums2[j];

    cout << endl << "mergeing => " << endl;
    func->merge(nums1,length1,nums2,length2);
    
   return 0;
}
