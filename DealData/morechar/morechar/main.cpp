//
//  main.cpp
//  morechar
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    char ch = 'M';
    int i = ch;
    
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Add one to the character code:" << endl;
    ch = ch +1;
    i = ch;
    cout << "The ASCII coe for " << ch << " is " << i << endl;
    cout << "Displaying char ch using cout.put(ch):";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done" <<endl;
    return 0;
}
