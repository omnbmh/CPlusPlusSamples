//
//  main.cpp
//  address
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int donuts =6;
    double cups = 4.5;
    
    cout << "donuts value = "<< donuts;
    cout << " and donuts address = " << &donuts << endl;
    
    cout << "cups value = " << cups <<
    " and cups address = " << &cups << endl;
    
    return 0;
}
