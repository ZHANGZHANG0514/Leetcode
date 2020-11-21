#include "vector"
#include "algorithm"
using namespace std;

class Solution56 {
public:
    vector<vector<int>> merge(vector<vector<int>> intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        for (auto item : intervals) {
            if (result.empty() || item[0] > result.back()[1]) {
                result.push_back(item);
            }
            else {
                result.back()[1] = max(item[1], result.back()[1]);
            }
        }
        return result;
    }
};