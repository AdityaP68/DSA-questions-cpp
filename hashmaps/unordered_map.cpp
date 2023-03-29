#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    unordered_map<string, int> ourmap;
    //insert
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    //find
    cout << ourmap["abc"] << endl;
    cout << ourmap.at("abc") << endl;
    //cout << ourmap.at("ghi") << endl;
    cout << ourmap["ghi"] << endl;
    cout << "size of the map is: "<<ourmap.size() << endl;
    // if key DND then square brackets insert 0 and give 0 (default)

    //check presence
    if(ourmap.count("ghi") > 0){
        cout << "ghi is present" << endl;
    }

    //erase
    ourmap.erase("ghi");
    cout << "size of the map is: "<<ourmap.size() << endl;
    if(ourmap.count("ghi") > 0){
        cout << "ghi is present 2" << endl;
    }



}