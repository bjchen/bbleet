#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        
        if (nums.size() == 0)
            return 0;
            
        int lengthCount = 1;
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[lengthCount-1])
            {
                nums[lengthCount++] = nums[i];
            }
        }
        return lengthCount;
    }
};

int main()
{
    //int target = 12;
    vector<int> nums = {1, 1, 2, 3, 3};
    Solution *fun;
    
    //unordered_map<int, int> umap;
    //vector<int> result;
    int length;
    
    length = fun->removeDuplicates(nums);
    
    for (int i = 0; i < length; ++i)
        cout << "length: " << length << ", Result:" << nums[i] << endl;

    return 0;
}

