#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = nums[0];
        
        // sum 
        //if (sum < 0) 
        //? nums[i]重新開始 : (nums[i]+sum)//加上原先的局部和;
        for (int i = 1; i < nums.size(); ++i)
        {
            sum = max(nums[i] + sum, nums[i]);
            if (sum > ans) ans = sum;
        }
        return ans;
    }
};

int main()
{
    Solution *func;
    vector<int> nums = {9, -3, -1,-5};
            //  f    = {-2, 1,-2, 4,  3, 5, 6, 1, 5}
            //  max  = -2 => 1 => -2 => 4 => 3 => 5 => 6 =>

    int length = nums.size();
    int max = func->maxSubArray(nums);
    
    cout << "length: " << nums.size() << "->" << length << endl;
    cout << "output: " << endl;
    for (int i = 0; i < length; ++i)
        cout << " " << nums[i];
    cout << endl << "max: " << max << endl;
    
   return 0;
}
