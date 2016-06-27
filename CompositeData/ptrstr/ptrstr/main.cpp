//
//  main.cpp
//  ptrstr
//

#include <iostream>
#include "cstring"

int main(int argc, const char * argv[]) {
    using namespace std;
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;
    
    cout << animal << " and ";
    cout << bird << "\n";
    // cout << ps << "\n"; // may display garbage, may cause a crash
    
    cout << "Enter a kind of animal: ";
    cin >> animal ;
    ps = animal;
    cout << ps << "s!\n";
    cout << "Before using strcrp(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    
    ps = new char[strlen(animal)+1];
    strcpy(ps, animal);
    cout << "After using strcpy(): \n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    delete [] ps ;
    return 0;
}
