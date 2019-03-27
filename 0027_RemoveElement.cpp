/*
27. Remove Element

Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        
        if (nums.size() == 0)
        {
            cout << "nums is empty." << endl;
            return 0;
        }

        int lengthCount = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != val)
            {
                lengthCount++;
                nums[lengthCount-1] = nums[i];
            }
        }
        return lengthCount;
    }
    
};

int main()
{
    Solution *func;
    vector<int> nums = {};
    int val = 0;
    
    int length = func->removeElement(nums, val);
    
    cout << "length: " << nums.size() << "->" << length << endl;
    cout << "output: " << endl;
    for (int i = 0; i < length; ++i)
        cout << " " << nums[i];

   return 0;
}
