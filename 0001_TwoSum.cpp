#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        
        //vector<int> indices;
        unordered_map<int, int> unmap;
        
        for (int i = 0; i < nums.size(); ++i)
        {
            auto it = unmap.find(target - nums[i]);
            
            if (it != unmap.end()) //found.
            {
                return {unmap[target - nums[i]], i};
                //indices.push_back(it->second);
                //indices.push_back(i);
                //break;
            }
            
            unmap[nums[i]] = i; // not found.
        }
        return {}; //indices;
    }
};

int main()
{
    int target = 12;
    vector<int> nums = {2, 7, 11, 5};
    Solution *fun;
    
    unordered_map<int, int> umap;
    vector<int> result;
    
    result = fun->twoSum(nums, target);
    
    for (int i = 0; i < result.size(); ++i)
        cout << "Result:" << result[i] << endl;

   return 0;
}

