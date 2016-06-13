//
//  main.cpp
//  getinfo
//
//  Created by c8d8z8@gmail.com on 16/6/13.
//  Copyright © All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int carrots;
    cout << "How many carrots you hava?" << endl;
    cin >> carrots;
    carrots = carrots + 2;

    std::cout << "Now you hava " << carrots << " carrots." << std::endl;
    return 0;
}
