//
// Created by shuyong1 on 2019/10/28.
//

#include <iostream>
#include "src/test.h"
#include <vector>

using namespace std;


int  main(){

    print_hello();
    int b= 0;
    auto aa = b;

    vector<int> a_vec(4,10);
    a_vec.push_back(10000);
    cout << "hello world" << endl;
    for (auto x : a_vec){
        cout<<x<< endl;

    }
    return 0;
}