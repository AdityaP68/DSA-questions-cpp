#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

//majority containers in cpp have their iterators
int main()
{
    unordered_map<string, int> map;
    map["abc"] = 1;
    map["abc1"] = 2;
    map["abc2"] = 3;
    map["abc3"] = 4;
    map["abc4"] = 5;
    map["abc5"] = 6;

    unordered_map<string, int>::iterator it = map.begin();
    while (it != map.end())
    {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        it++;
    }
    //find --> returns an iterator
    unordered_map<string, int>::iterator it2 = map.find("abc");
    //map.erase(it2, it2 + 2); --> erase can accept iterators also either 
    //iterator.beign(), or a range, [it.begin(), it.end()]


    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

}