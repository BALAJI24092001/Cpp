#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i: nums){
            ans = ans ^ i;
        }
        return ans;
    }
int main (int argc, char *argv[]) {
    vector<int> vec = {2, 2, 1};
    std::cout << singleNumber(vec);
    return 0;
}
