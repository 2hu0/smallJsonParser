#include <iostream>

using namespace std;

#include "json/json.h"
#include<fstream>
#include <sstream>

using namespace xiaolu::json;


int main() {
//    Json v1;
//    Json v2 = true;
//    Json v3 = 123;
//    Json v4 = 1.23;
//    Json v5 = "hello world";
//
//    bool b = v2;
//    int i = v3;
//    double c = v4;


//    Json arr;
//    arr[0] = true;
//    arr[1] = 123;
//    arr.append(1.23);
//    arr.append("hello world");
//    arr.remove(0);
//    std::cout << arr.str() << endl;
//    std::cout << arr.has(0) << std::endl;
//    std::cout << arr.has(4) << std::endl;


//    std::cout << arr.str()<< endl;
//    Json obj;
//    obj["bool"] = true;
//    obj["int"] = 123;
//    obj["double"] = 1.23;
//    obj["str"] = "hello world";
//    obj.remove("str");
//    obj.clear();
//    const string &str = "[\"a\",1,2,3,true,12.1,false]";
//    Json v;
//    v.parse(str);
//    std::cout << v.str() << std::endl;
    ifstream fin("../test.json");
    stringstream ss;
    ss << fin.rdbuf();
    const string &str = ss.str();
    Json v;
    v.parse(str);
    std::cout << v.str() << std::endl;
}

