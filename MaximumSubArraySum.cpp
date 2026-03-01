#include<iostream>
#include <climits>
#include <algorithm>
int main(){
	int arr[]={1,-2,3,-9,4,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int maxsum=INT_MIN;
	for(int start=0;start<n;start++){
		int currsum=0;
		for(int end=start;end<n;end++){
			currsum +=arr[end];
			maxsum=std::max(currsum,maxsum);
		}
	}
	std::cout<<"Max subarray sum :- "<<maxsum;
	return 0;
}



/*
 int currsum = nums[0];
        int maxsum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            currsum = max(nums[i], currsum + nums[i]);
            maxsum = max(maxsum, currsum);
        }

        return maxsum;
		
		*/