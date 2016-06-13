//
//  main.cpp
//  ourfunc
//
//  Created by c8d8z8@gmail.com on 16/6/13.
//  Copyright © All rights reserved.
//

#include <iostream>
void simon(int);

int main(int argc, const char * argv[]) {
    using namespace std;
    simon(3);
    std::cout << "Pick an integer: ";
    int count;
    std::cin >> count;
    simon(count);
    std::cout << "Done!" << std::endl;
    return 0;
}

void simon(int n){
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." <<endl;
}
