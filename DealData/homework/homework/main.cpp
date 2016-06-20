//
//  main.cpp
//  homework
//

#include <iostream>
#include <cmath>

void test1();
void test2();
void test3();
void test4();
void test5();
void test6();
void test7();
void test8();
void test9();

void test11();
void test12();
void test13();
void test14();
void test15();
void test16();

using namespace std;

int main(int argc, const char * argv[]) {
    //test1();
    //test6();
    //test8();
    //test9();
    
    test11();
    test12();
    test13();
    test14();
    test15();
    test16();
    return 0;
}

void test1(){
    cout << "How many integer types? \n";
    cout << "bool" << endl
    << "char \n"
    << "signed char \n"
    << "unsigned char \n"
    << "short \n"
    << "unsigned short \n"
    << "int \n"
    << "unsigned int \n"
    << "long \n"
    << "unsigned long" << endl;
    cout << "wchar_t" << endl;
}

void test2(){
    short s = 80;
    unsigned int i = 42110;
    long int li= 3000000000;
}

void test6(){
    int i = 88;
    char ch_i = i;
    char ch = char(i);
    cout << "print char ch = " << ch << endl;
    cout << "print char ch_i = " << ch_i << endl;
}

void test8(){
    cout << "a. 8*9+2 = " << 8*9+2 << endl;
    cout << "b. 6*3/4 = " << 6*3/4 << endl;
    cout << "c. 3/4*6 = " << 3/4*6 << endl;
    cout << "d. 6.0*3/4 = " << 6.0*3/4 << endl;
    cout << "e. 15%4 = " << 15%4 << endl;
}

void test9(){
    double x1 = 123.45;
    double x2 =23.45;
    int i = x1+x2;
    
    cout << "x1 + x2 = " << i << endl;
}

void test11(){
    
    // 69
    const int Inch_per_ft = 12;
    cout << "Please enter your height(inch):";
    int tops ;
    cin >> tops;
    
    cout << "Tony tops " << tops / Inch_per_ft << " fts and "
    << tops % Inch_per_ft << " inchs.\n";
    
}

void test12(){
    // 5 fts 9 inchs
    // 171.6 pounds
    const int Inch_per_ft = 12;
    const double M_per_inchs = 0.0254;
    const double pounds_per_Kg = 2.2;
    int fts;
    int ins;
    double pounds;
    cout << "enter your fts:";
    cin >> fts;
    cout << "Enter your ins:";
    cin >> ins;
    cout << "Enter your pounds:";
    cin >> pounds;
    
    cout << "Tony tops " << (fts * Inch_per_ft + ins) * M_per_inchs << " m.\n";
    cout << "weight " << pounds / pounds_per_Kg << " kg.\n";
    cout << "BMI is " <<((pounds / pounds_per_Kg) / ((fts * Inch_per_ft + ins) * M_per_inchs))* ((pounds / pounds_per_Kg) / ((fts * Inch_per_ft + ins) * M_per_inchs))<< endl;
}

void test13(){
    const int Min_per_deg = 60;
    const int Sec_per_min = 60;
    
    double degrees ;
    double minutes ;
    double seconds;
    
    cout << "Enter a latitube in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of src: ";
    cin >> minutes;
    cout << "Finally, enter the seconds os src: ";
    cin >> seconds;
    
    double deg =degrees + minutes/Min_per_deg + seconds / Sec_per_min / Min_per_deg;
    
    cout << degrees << " degrees, "
    << minutes << " minutes, "
    << seconds << " seconds = "
    << deg << " degrees" << endl;
}


void test14(){
    long sec ;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    
    cout << sec << " seconds = " << sec / (24 * 60 * 60) << " days, "
    << sec % (24 * 60 * 60) / (60 * 60)<< " minutes, "
    << sec % (24 * 60 * 60) % (60 * 60) / 60 << " seconds\n";
}

void test15(){
    double Km ;
    double L ;
    
    cout << "Enter car's Km: ";
    cin >> Km;
    cout << "Enter car's L: ";
    cin >> L;
    cout << "Car cost " << L / (Km / 100) << " L/100Km.\n";
}


void test16(){
    const double mile_Per_100_Km = 62.14;
    const double gallon_Per_L = 3.875;
    
    double L_Per_100_Km ;
    cout << "Enter Europe L/100Km:";
    cin >> L_Per_100_Km;
    double mpg = 1/(L_Per_100_Km * (1/(gallon_Per_L*mile_Per_100_Km)));
    
    
    cout << mpg <<" mpg is " << L_Per_100_Km << " sL/100Km.\n";
}





