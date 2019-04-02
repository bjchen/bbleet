#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // 9999 +1 -> 10000 
        // 1999 +1 ->  2000
        // 1099 +1 ->  1100
        // 1009 +1 ->  1010 
        // 9    +1 ->    10 => !!!!!!!
        if (digits.size() == 0) 
            return digits;
        
        if (digits.size() == 1)
                
        for (int i = digits.size() - 1; i >= 0 ; --i)
        {
            if (digits[i] < 9)
            {
                ++digits[i];
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }

        if (digits[0] == 0) // increase a digit
            digits.insert(digits.begin(), 1);
        
        return digits;
    }
};

int main()
{
    Solution *func;
    vector<int> nums = {9};

    int length = nums.size();
    
    cout << "length: " << nums.size() << "->" << length << endl;
    cout << "output: " << endl;
    for (int i = 0; i < length; ++i)
        cout << " " << nums[i];

    vector<int> result = func->plusOne(nums);

    cout << endl << "result: ";
    for (int j = 0; j < result.size(); ++j)
        cout << " " << result[j];
    

   return 0;
}
