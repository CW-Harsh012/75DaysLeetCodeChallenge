class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int count1 = 0, count2 = 0;
        int maj1 = 0, maj2 = 1; // different initial values

        for (int num : nums) {

            if (num == maj1)
                count1++;

            else if (num == maj2)
                count2++;

            else if (count1 == 0) {
                maj1 = num;
                count1 = 1;
            }

            else if (count2 == 0) {
                maj2 = num;
                count2 = 1;
            }

            else {
                count1--;
                count2--;
            }
        }

        int freq1 = 0, freq2 = 0;

        for (int num : nums) {
            if (num == maj1)
                freq1++;
            else if (num == maj2)
                freq2++;
        }

        vector<int> result;

        if (freq1 > nums.size() / 3)
            result.push_back(maj1);

        if (freq2 > nums.size() / 3)
            result.push_back(maj2);

        return result;
    }
};