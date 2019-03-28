#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int val){
        
        if (nums.size() == 0)
        {
            cout << "nums is empty." << endl;
            return 0;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (val < nums[0])
                return 0;
            else if (val > nums[nums.size()-1])
                return (nums.size());
            else if ((val > nums[i]) && (val <= nums[i+1]))
                return ++i;
        }
    }
    
};

int main()
{
    Solution *func;
    vector<int> nums = {1,2,2,4,5};
    int target = 3;
    
    int length = nums.size();
    int index = func->searchInsert(nums, target);
    
    cout << "target: " << target << endl;
    cout << "length: " << nums.size() << "->" << length << endl;
    cout << "output: " << endl;
    for (int i = 0; i < length; ++i)
        cout << " " << nums[i];
    cout << endl << "index: " << index << endl;
    

   return 0;
}
