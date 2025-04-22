#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int curr_sum = 0, max_sum = INT_MIN;
    for(int i: nums){
        curr_sum += i;
        max_sum = max(curr_sum, max_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    return max_sum;
}
    
int main (int argc, char *argv[]) {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubArray(arr);
    std::cout << "Max subarray sum using Kadane's Algorithm : " << result << endl;
    return 0;
}
