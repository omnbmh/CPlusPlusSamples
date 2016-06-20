- C++ 中的数据类型
  - [unsigned] short 16bit
  - [unsigned] int   32bit
  - [unsigned] long  64+bit
  - [unsigned] long long C99 新增
  - char 8bit
  - wchar_t 16bit
  - bool 1bit
  - float
  - double
  - long double

- 编译器通过校验表来确定在算术表达式中执行的转换。编译器将依次查阅该列表
  1. 如果有一个操作数的类型是 long double，则将另一个数转换为 long double。
  2. 否则，如果有一个操作数的类型是 double，则将另一个数转换为 double。
  3. 否则，如果有一个操作数的类型是 float，则将另一个数转换为 float。
  4. 否则，说明操作数都是整形，因此执行整型提升。
  5. 在这种情况下，如果有一个操作数的类型是 unsigned long，则将另一个数转换为 unsigned long。
  6. 否则，如果有一个操作数是 long int，而另一个操作数是 unsigned int，则转换取决于两种类型的相对长度。如果 long 能够表示 unsigned int 的所有可能值，则将 unsigned int 转换为 long。
  7. 否则，将两个操作数都转换为 unsigned long。
  8. 否则，如果一个操作数是 long，则将另一个操作数转换为 long。
  9. 否则，如果一个操作数是 unsigned int，则将另一个操作数转换为 unsigned int。
  10. 如果编译器到达此处，则说明两个操作数都是int类型。
