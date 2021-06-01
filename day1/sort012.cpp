//https://leetcode.com/problems/sort-colors/

//Solution 1(not really a solution)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int count0=0;
        int count1=0;
        int i = 0;
        while(i<size){
            if(nums[i] == 0)
                count0++;
            else if(nums[i] == 1)
                count1++;
            i++;
        }
        i=0;
        while(i<size){
            if(count0>0){
                nums[i] = 0;
                count0--;
            }
            else if(count1>0){
                nums[i] = 1;
                count1--;
            }
            else
            {
                nums[i] = 2;            }
        i++;
        }
    }
};


//Solution 2(best solution)(dutch national flag algo)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0;
        int hi = nums.size() - 1;
        
        while(mid <= hi){
            switch(nums[mid]){
                case 0:
                    swap(nums[lo++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
            }
        }
    }
};

