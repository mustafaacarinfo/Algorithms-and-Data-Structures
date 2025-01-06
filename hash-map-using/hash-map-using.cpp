#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*  {-2, 1, 1, -2}; */

int find_sub_array(vector<int> &arr)
{
    unordered_map<long long, int> prefixSumIndex; // prefixSum -> ilk görüldüğü indeks
    long long currentSum = 0;

    prefixSumIndex[0] = -1;

    for (int i = 0; i < (int)arr.size(); i++) {
        currentSum += arr[i];

        // currentSum daha önce görülmüşse 0 toplamlı alt dizi bulduk
        if (prefixSumIndex.find(currentSum) != prefixSumIndex.end()) {
            cout << "Toplamı 0 olan alt dizi bulundu: "
            << prefixSumIndex[currentSum] + 1 << " ile "  << i << " indeksleri arasında.\n";
         
            return 0;
        }
        prefixSumIndex[currentSum] = i;
    }

    // Hiç bulunamadıysa
    cout << "Toplamı 0 olan herhangi bir alt dizi yok.\n";
    return 0;

}

int main()
{
    vector<int> array = {-2, 1, 1, -2};

    find_sub_array(array);


    return 0;
}


