- C++ 中的复合数据类型
  - 数组
    - 初始化
      1. typeName* pointerName = new typeName [size];
      2. typeName attrName [size] = {e1,e2}
  - 结构 struct
    - 访问元素
      1. 结构体.元素
      2. 结构体指针 -> 元素
  - 指针
    - 声明指针 typeName \*pointerName
    - 获取指针 &pointerName

- 使用 new 和 delete 时，应遵守以下规则
  1. 不要使用 delete 来释放不是 new 分配的内存。
  2. 不要使用 delete 释放同一个内存块两次。
  3. 如果使用 new [] 为数组分配内存，则应使用 delete [] 来释放。
  4. 如果使用 new [] 为一个实体分配内存，则应使用 delete （没有方括号）来释放。
  5. 对空值指针应用 delete 是安全的。
