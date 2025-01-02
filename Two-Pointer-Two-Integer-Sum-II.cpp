#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& v, int target) {
    int left = 0;
    int right = v.size() - 1;

    while (left < right) {
        int sum = v[left] + v[right];
        if (sum == target) {
            return {++left, ++right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}

int main() {
    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(v, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
