class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        unordered_map<int,int>hash;
        vector<int>ans;

        for(int i=1;i<=nums.size();i++){
            if(hash.find(nums[i-1])==hash.end()){
                hash[nums[i-1]]=i;
            }
            if(hash.find(target-nums[i-1])!=hash.end()){
                if(hash[target-nums[i-1]]==i)
                    continue;
                ans.push_back(hash[target-nums[i-1]]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;


    }
};
