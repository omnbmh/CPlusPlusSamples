//
//  main.cpp
//  structur
//

#include <iostream>

struct inflatable{ // structure declaration
    char name[20];
    float volume;
    double price;
};

int main(int argc, const char * argv[]) {
    using namespace std;
    inflatable guest ={
    "Glorious Gloria",
        1.88,
        29.99
    }; // guest is structure variable of type inflatable
        // It's initialized to che indicated values
    inflatable pal ={
    "Audacious Arthur",
        3.12,
        32.99
    }; // pal is a second variable of type  inflatable
    
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}
