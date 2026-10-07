#include <iostream>
#include <vector>

class college_test_2
{
    int missing_number(vector<int> &nums) 
    {
        int n = nums.size();
        int Xor1 = 0;
        int Xor2 = 0;

        for (int i=1; i<= n + 1; i++) 
        {
            Xor1^= i;
        }

        for (int i=0; i<n; i++) 
        {
            Xor2^= nums[i];
        }

        return Xor1 ^ Xor2;
    }
};

main() 
{
    college_test_2 obj;
    vector<int> nums = {3, 0, 1};
    int missing = obj.missing_number(nums);
    cout << "The missing number is: " << missing << endl;
    
    college_test_2 obj2;
    vector<int> nums2 = {1, 9, 2, 3, 5, 6, 7, 8};
    int missing2 = obj2.missing_number(nums2);
    cout << "The missing number is: " << missing2 << endl;
    
    college_test_2 obj3;
    vector<int> nums3 = {0, 1,3, 4, 5};
    int missing3 = obj3.missing_number(nums3);
    cout << "The missing number is: " << missing3 << endl;
    return 0;
}
