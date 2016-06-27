//
//  main.cpp
//  use_new
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int* pt = new int;
    *pt = 1001;
    cout << "int ";
    cout << "value = " << *pt << " : location = " << pt << endl;

    double* pd = new double;
    *pd = 10000001.0;

    cout << "double ";
    cout << "value = " << *pd << " : location = " << pd << endl;

    cout << "Size of pt = " << sizeof(pt)
    << " : size of *pt =" << sizeof(*pt) << endl;
    cout << "Size of pd = " << sizeof(pd)
    << " : size of *pd =" << sizeof(*pd) << endl;

    return 0;
}
