#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

/* {1,2,3,4,1}; */
vector<int> find_duplicate_element(vector<int> &array){

    unordered_map<int,int> key_value;
    vector<int> duplicated_element;
    
    for (size_t i = 0; i < array.size(); i++) {
        int find_itself = array[i];

        if (key_value.find(find_itself) != key_value.end()){
             if(duplicated_element.empty() || duplicated_element.back() != find_itself) {
                duplicated_element.push_back(find_itself);
             }
        } else {
            key_value[find_itself] = i;
        }
    }

    if (duplicated_element.empty()) {
        duplicated_element.push_back(-1);
    }

    return duplicated_element; 
}

int main()
{
    vector <int> array = {45,45,45,4,1};

    vector <int> dublicated_element = find_duplicate_element(array);

    for(auto &i : dublicated_element){
        cout << i << endl;
    }


    while(1);
}