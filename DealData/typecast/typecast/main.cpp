//
//  main.cpp
//  typecast
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace  std;
    int auks,bats,coots;
    auks = 19.99 + 11.99;
    bats = (int)19.99 +  (int)11.99; // old C syntax
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << bats
    << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch)<< endl;
    return 0;
}
