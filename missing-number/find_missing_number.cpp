#include <iostream>
#include <vector>

using namespace std;

int find_missing_number(vector<int> &numbers)
{
    int missing_number = 0;
    for(int i=0; i< numbers.size(); i++)
    {
        if(numbers[i] != i+1)
        {
            missing_number =  i+1;
        }
    }

    return missing_number;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    
    cout << find_missing_number(numbers) << endl;
    
    return 0;
}


















