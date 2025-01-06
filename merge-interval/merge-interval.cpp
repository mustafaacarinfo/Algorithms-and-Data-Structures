#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
/* {{1,3}, {2,6}, {8, 10}, {15, 18}}; */
vector<vector<int>> merge_intervals(vector<vector<int>>& intervals)
{

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;

        for (const auto &interval : intervals) {
            if (merged.empty() || merged.back()[1] < interval[0]){
                merged.push_back(interval);
            } else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

    return merged;
}

int main()
{
    vector<vector <int>> intervals = {{1,3}, {2,6}, {8, 10}, {7, 18}};

    for(auto i : merge_intervals(intervals))
    {
        cout << i[0] << " " << i[1] << endl;
    }

    int a = 10, b = 20;
    int& ref = a;
    ref = b; // Changes the value of a, not ref itself
    
    cout << a << " " << b << " " << ref << endl;
    
    while (true);
    return 0;
}

