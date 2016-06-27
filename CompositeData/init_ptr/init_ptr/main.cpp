//
//  main.cpp
//  init_ptr
//
//  Created by 陈德志 on 16/6/21.
//
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int higgens = 5;
    int* pt = &higgens;
    
    cout << "Value of higgens = " << higgens
    << "; Address of higgens = " << &higgens << endl;
    
    cout << "Value of *pt = " << *pt
    << "; Address of pt = " << pt << endl;
    return 0;
}
