#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }

int main (int argc, char *argv[]) {
    
    vector<int> vals = {2,7,11,15};
    vector<int> sol =  twoSum(vals, 9);
    std::cout << "Solution : [" << sol[0] << ", " << sol[1] << "]" << endl;

    return 0;
}
