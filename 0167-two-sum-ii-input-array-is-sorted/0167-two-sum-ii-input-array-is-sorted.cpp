class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int left = 0;
        // int right = numbers.size()-1;
        
        // while(left< right)
        // {
        //     int sum = numbers[left] + numbers[right];
        //     if(sum==target) return{left+1, right+1};

        //     else if(sum<target)
        //     {
        //         left++;
        //     }
        //     else if(sum>target) right--;
        // }
        // return {};

        // using maps
        map<int,int> mp;
        for(int i=0; i< numbers.size(); i++)
        {
            int diff = target - numbers[i];
            if (mp.find(diff) != mp.end()) {
                return {mp[diff] + 1, i + 1};
            }
            mp[numbers[i]] = i;
        }
        return {};
    }
};