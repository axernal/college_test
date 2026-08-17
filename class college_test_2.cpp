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