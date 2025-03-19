#include <iostream>
#include <vector>
using namespace std;

/* arr[1,3,5,6,7,8,9,10,11]   9 elemanlı bir dizide 5 sayısını arıyoruz */

int ara(vector<int> &array, int target)
{
    int left = 0;
    int right = array.size() - 1;

    while(left <= right) /* 0 from 8*/
    {
        int mid = left + (right-left)/2;

        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

    }
    return left;

}


























