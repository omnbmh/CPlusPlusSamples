//
//  main.cpp
//  limits
//

#include <iostream>
#include <climits>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    
    cout << "Maximum values:" << endl;
    cout << "int : " << n_int << endl;
    cout << "short : " << n_short << endl;
    cout << "long : " << n_long << endl;
    
    cout << "Minimum int values = " << INT_MIN <<endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
