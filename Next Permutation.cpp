class Solution {
public:
    vector<int>nextPermutation(vector<int>& nums) {
      int index=-1;
      int n =nums.size();
       // Finding the largest Prefix Index 
      for(int i=n-2;i>=0;i--)
      {
          if(nums[i]<nums[i+1])
          {
              index=i;
              break;
          }
      }
      // If its the last array given simply reverse it
      if(index==-1)
      {
          reverse(nums.begin(),nums.end());
          return nums;
      }
     // Finding the Smallest element which is very close and swap it with the index
      for(int i=n-1;i>index;i--)
      {
          if(nums[i]>nums[index])
          {
              swap(nums[i],nums[index]);
              break;
          }
      }
      
      // Sorting the remaining array
      reverse(nums.begin()+index+1,nums.end());
      return nums;
       
    }
};