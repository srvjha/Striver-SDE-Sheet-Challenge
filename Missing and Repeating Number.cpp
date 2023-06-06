#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	// Write your code here 
	
     int repeating = -1;
    int missing = -1;
    int hash[n+1]={0};
    for(int i=0;i<n;i++) hash[a[i]]++;
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==2) repeating=i;
        else if(hash[i]==0) missing=i;
        if(repeating!=-1 && missing!=-1) break;
    }
    
    return {missing,repeating};
	
}
