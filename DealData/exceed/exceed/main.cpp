//
//  main.cpp
//  exceed
//

#include <iostream>
#define ZERO 0 // make ZERO symbol for 0 value
#include <climits>

int main(int argc, const char * argv[]) {
    using namespace  std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    cout << "Sam has " << sam << " dollars ans Sue has " << sue;
    cout << " dollars deposited." << endl
    
    << "Add $1 to each account." << endl << "Now ";
    
    sam = sam +1;
    sue = sue + 1;
    
    cout << "Sam has " << sam << " dollars ans Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;
    
    sam = ZERO;
    sue = ZERO;
    
    cout << "Sam has " << sam << " dollars ans Sue has " << sue;
    cout << " dollars deposited." << endl;
    
    cout << "Take $1 from each account." << endl << "Now ";
    
    sam = sam -1;
    sue = sue -1;
    
    cout << "Sam has " << sam << " dollars ans Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
    
    return 0;
}
