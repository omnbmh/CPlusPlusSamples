//
//  main.cpp
//  homework
//

#include <iostream>
#include "cstring"

using namespace std;

// review.01
char actor[30];
short betise[100];
float chuck[13];
long double dipsea[64];
// review.02
void review02(void);
// review.03
void review03();
// review.04
void review04();
// review.05
char ch05 [50] = "cheeseburger";
// review.06
struct fish{
    char type [20];
    int weight;
    float size;
};
// review.07
fish carp = {
    "carp",
    12,
    11.11
};
// review.08
enum Response {YES =1,
    NO =0,
    Maybe =2
};
// review.09
void review09();
// review.10
void review10();
// review.11
int* review11();
// review.12
void review12();
// review.13
fish *review13();
// review.14 // 如果地址中有空格 将不不能读取完整

// test.1
void test1();
// test.2
void test2();
// test.3
void test3();
// test.4
void test4();
// test.5
void test5();
// test.6
void test6();
// test.7
void test7();
// test.8
void test8();
// test.9
void test9();


struct student{
    char name[20];
    char grade;
    int age;
};

struct  CandyBar {
    string brand;
    float weight;
    int calorie;
};

struct  pizza {
    char company[100];
    double diameter;
    float weight;
};

int main(int argc, const char * argv[]) {
    //review02();
    //review03();
    //review04();
    //review09();
    //review10();
    //int * iar = review11();
    //cout << "Size of iar = " << sizeof(iar)<< endl;
    //cout << "Size of *iar = " << sizeof(*iar)<< endl;
    //review12();// 程序有效 打印出了String的内存地址
    //fish *carp = review13();
    //cout<< "fish's type : " << (*carp).type<<endl;
    //cout<< "fish's weight : " << (*carp).weight<<endl;
    //cout<< "fish's size : " << carp->size<<endl;
    
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
    //test7();
    //test8();
    //test9();
    return 0;
}

void review02(){
    int *par = new int[5];
    par[0] = 1;
    par[1] = 3;
    par[2] = 5;
    par[3] = 7;
    par[4] = 9;
    
    cout << "*par = " << *par << endl;
    cout << "par[1] = " << par[1] << endl;
    cout << "*(par + 3) = " << *(par + 3) << endl;
    
}

void review03(){
    int *par = new int[5];
    par[0] = 1;
    par[1] = 3;
    par[2] = 5;
    par[3] = 7;
    par[4] = 9;
    
    int even = *par + par[4];
    cout << "even = " << even << endl;
}

void review04(){
    float ar[2] = {100.1,10000.1};
    cout << "ar[1] = " << ar[1] << endl;
}
void review09(){
    double ted = 10.01;
    double* p_ted = &ted;
    
    cout << "ted = "<< *p_ted << endl;
    
}
void review10(){
    float* treacle  = new float [10];
    treacle[0] = 1.1;
    treacle[1] = 2.2;
    treacle[9] = 10.1;
    
    cout << "treacle[0] = " << *treacle << endl;
    cout << "treacle[9] = " << *(treacle+9) << endl;
}

int *review11(){
    cout << "Enter the size of int array: ";
    int size ;
    cin >> size;
    
    int *iar = new int[size];
    return iar;
}

void review12(){
    cout << (int *)"Home os the jolly bytes";
}

fish* review13(){
    fish *carp = new fish;
    cout << "Enter the type of fish: ";
    cin.getline(carp->type, 50);
    cout << "Enter the weight of fish: ";
    cin >> carp->weight;
    cout << "Enter the size of fish: ";
    cin >> (*carp).size ;
    return  carp;
}

void test1(){
    student *s1 = new student;
    cout << "what is your first name?";
    cin.getline((*s1).name, 20);
    cout << "what letter grade do you deserve?";
    cin.get(s1->grade);
    cout << "what is your age?";
    cin >> s1->age;
    
    s1->grade =(s1->grade)+1;
    cout << "Name : " << s1->name << endl
    << "Grade : " << s1->grade << endl
    << "Age : " << s1->age << endl;
}

void test2(){
    string name;
    string dessert;
    
    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;
    
    cout << "I have some delicious " << dessert;
    cout << " for you." << name << ".\n";
    
}

void test3(){
    char first [20];
    char last [20];
    cout << "Enter your first name: ";
    cin.getline(first, 20);
    cout << "Enter your last name: ";
    cin.getline(last, 20);
    
    char *name =strcat(strcat(first, ", "),last);
    cout << "Here's the infomation in a singe string "<< name << endl;
}

void test4(){
    string first;
    string last;
    cout << "Enter your first name: ";
    cin >> first;
    cout << "Enter your last name: ";
    cin >> last;
    
    cout << "Here's the infomation in a singe string "<< first + ", " + last << endl;
}
void test5 (){
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    
    cout << "brand: " << snack.brand << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calorie: " << snack.calorie << endl;
}

void test6(){
    CandyBar bars[3] = {
        {
            "Mocha Munch 1",
            1.1,
            111
        },
        {
            "Mocha Munch 2",
            2.2,
            222
        },
        {
            "Mocha Munch 3",
            3.3,
            333
        }};
    
    cout<< "bar[0] brand : " << (*bars).brand << endl;
    cout<< "bar[0] weight : " << (*bars).weight << endl;
    cout<< "bar[0] calorie : " << (*bars).calorie << endl;
    
    cout<< "bar[1] brand : " << (*(bars+1)).brand << endl;
    cout<< "bar[1] weight : " << (*(bars+1)).weight << endl;
    cout<< "bar[1] calorie : " << (*(bars+1)).calorie << endl;
    
    cout<< "bar[2] brand : " << bars[2].brand << endl;
    cout<< "bar[2] weight : " << bars[2].weight << endl;
    cout<< "bar[2] calorie : " << bars[2].calorie << endl;
    
}

void test7(){
    char company [100];
    double diameter;
    float weight;
    cout << "Enter company:";
    cin.getline(company, 100);
    cout << "Enter diameter:";
    cin >> diameter;
    cout << "Enter weight:";
    cin >> weight;
    
    pizza p ;
    strcpy(p.company , company);
    p.diameter =    diameter;
    p.weight =    weight;
    cout << "Company: " << p.company << endl;
    cout << "Diameter: " << p.diameter << endl;
    cout << "Weight: " << p.weight << endl;
}

void test8(){
    pizza *p = new pizza;
    cout << "Enter diameter:";
    cin >> p->diameter;
    cin.get();
    cout << "Enter company:";
    cin.getline(p->company, 100);
    cout << "Enter weight:";
    cin >> p->weight;
    
    cout << "Company: " << (*p).company << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight: " << p->weight << endl;
}
void test9(){
    CandyBar *bars = new CandyBar [3] ;
    
    bars[0] ={
        "Mocha Munch 1",
        1.1,
        111
    };
    
    bars[1] = {
        "Mocha Munch 2",
        2.2,
        222
    };
    
    bars[2] = {
        "Mocha Munch 3",
        3.3,
        333
    };
    
    cout<< "bar[0] brand : " << (*bars).brand << endl;
    cout<< "bar[0] weight : " << (*bars).weight << endl;
    cout<< "bar[0] calorie : " << (*bars).calorie << endl;
    
    cout<< "bar[1] brand : " << (*(bars+1)).brand << endl;
    cout<< "bar[1] weight : " << (*(bars+1)).weight << endl;
    cout<< "bar[1] calorie : " << (*(bars+1)).calorie << endl;
    
    cout<< "bar[2] brand : " << bars[2].brand << endl;
    cout<< "bar[2] weight : " << bars[2].weight << endl;
    cout<< "bar[2] calorie : " << bars[2].calorie << endl;
    
}
