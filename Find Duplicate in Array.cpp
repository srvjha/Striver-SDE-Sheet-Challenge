#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	// Write your code here.
	  vector<int>visited(n,0);
        for(int i=0;i<n;i++)
        {
            visited[nums[i]]++;
            if(visited[nums[i]]==2) return nums[i];
        }
        return -1; 

}
