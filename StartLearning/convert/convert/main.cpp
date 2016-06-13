//
//  main.cpp
//  convert
//
//

#include <iostream>

int stonetolb(int);

int main(int argc, const char * argv[]) {
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);

    std::cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts){
    return  14 * sts;
}
