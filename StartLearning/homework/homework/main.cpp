//
//  main.cpp
//  homework
//
//  Created by 陈德志 on 16/6/13.
//
//

#include <iostream>

using namespace std;

void test01();
void test02();
int langtoma(int);
void test03();
void func1();
void func2();
void test04();
double shetohua(double);
void test05();
double gntotw(double);
void test06();
void coutTime(int,int);

int main(int argc, const char * argv[]) {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    return 0;
}

void test01(){
    std::cout << "My name is Lilei." <<endl;
    cout << "My hometown is Harbin China!" << endl;
}

void test02(){
    cout << "请输入你多浪:";
    int lang;
    cin >> lang;
    int ma = langtoma(lang);
    cout << lang << " 浪 = " << ma << "码" << endl;
}

int langtoma(int lang){
    return 220 * lang;
}

void test03(){
    func1();
    func1();
    func2();
    func2();
}

void func1(){
    cout << "Three blind mice" << endl;
}

void func2(){
    cout << "See they how run" << endl;
}

void test04(){
    double she;
    cout << "Please enter a Celsius value:" ;
    cin >> she;
    double hua = shetohua(she);
    cout << she << " degrees Celsius is "<< hua << " degrees Fahrenheit." << endl;
    
}

double shetohua(double she){
    return  1.8 * she + 32.0;
}

void test05(){
    double gn;
    cout << "Enter the number of light years:";
    cin >> gn;
    double tw = gntotw(gn);
    cout << gn << " light years = " << tw << " astronomical units." << endl;
    
}

double gntotw(double gn){
    return  63240 * gn;
}

void test06(){
    int h ;
    int m;
    cout << "Enter the number of hours:";
    cin >> h;
    cout << "Enter the number of minutes:";
    cin >> m;
    coutTime(h,m);
}

void coutTime(int h,int m){
    cout << "Time: ";
    cout << h << ":" << m << endl;
}
