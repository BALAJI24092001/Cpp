#include <iostream>
#include <vector>
#include <algorithm> // HACK: Include for sorting algorithms
using namespace std;

class Solution {
public:
    int bruteForce(vector<int>& nums) {
        int n = nums.size();
        for(int i: nums){
            int count = 0;
            for(int j : nums){
                if(i == j){
                    ++count;
                }
            }
            if(count > n/2){
                return i;
            }
        }
        return -1;
    }
    int sortOptimal(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // sorting the vector
        int freq = 0, ans = nums[0];
        for(int i: nums){
            if(i == ans){
                freq++;
            } else if(i != ans){
                freq = 1;
                ans = i;
            }
            if(freq > n/2){
                return ans;
            }
        }
        return -1;
    }
    int mooresAlgorithm(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i: nums){
            if(freq == 0){
                ans = i;
            }
            if(i == ans){
                freq++;
            } else{
                freq--;
            }
        }
        return ans;
    }
};

int main (int argc, char *argv[]) {
    vector<int> prob = {1, 2, 2, 1, 1};
    Solution Sol;
    std::cout << "Brute Force Algorithm : " << Sol.bruteForce(prob) << endl;
    std::cout << "Sorted Array Algorithm : " << Sol.sortOptimal(prob) << endl;
    std::cout << "Moore's Algorithm : " << Sol.mooresAlgorithm(prob) << endl;
    return 0;
}
