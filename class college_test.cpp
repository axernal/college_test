class college_test
{
    int first_non_repeating(string s)
    {
        unordered_map<char,int> freq;

        for (char ch :s)
        {
            freq[ch]++;
        }

        for (char ch :s)
        {
            if (freq[ch] ==1)
            {
                return ch;
            }

        return -1;
        }
    }
};