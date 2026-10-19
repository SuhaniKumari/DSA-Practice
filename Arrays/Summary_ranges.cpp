#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Leetcode 228
vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ans;
    int n = nums.size();
    int i = 0;

    while (i < n) {
        int start = i;

        // Consecutive numbers ko traverse karo
        while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
            i++;
        }

        // Range ko string mein convert karo
        if (start == i) {
            ans.push_back(to_string(nums[start]));
        } else {
            ans.push_back(to_string(nums[start]) + "->" +
                          to_string(nums[i]));
        }

        i++;
    }

    return ans;
}

int main() {
    vector<int> nums = {0, 1, 2, 4, 5, 7};

    vector<string> result = summaryRanges(nums);

    cout << "[";

    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";

        if (i < result.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}
