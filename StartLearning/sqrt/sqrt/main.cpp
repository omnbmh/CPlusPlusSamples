//
//  main.cpp
//  sqrt
//
//  Created by c8d8z8@gmail.com on 16/6/13.
//  Copyright © All rights reserved.
//

#include <iostream>
#include <cmath> // or math.h C语言的类库

int main(int argc, const char * argv[]) {
    using namespace std;
    double area;
    cout << "Enter the floor area, in square feet, of your home: " << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
        << " feet to the side." << endl;
    std::cout << "How fascinating."<<endl;
    return 0;
}
