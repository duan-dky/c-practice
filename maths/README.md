## 4 数学类：三角形类别判断

### 4.1 需求分析说明

定义二维点（point）类，包含点的坐标x和y，再定义二维的三角形（triangle）类，在三角形类中能对三角形类别，首先判断输入的三个点能否构成三角形，然后判断是否为等腰三角形、等边三角形、直角三角形、等腰直角三角形。

### 4.2 程序设计思路及结构说明

建立Triangle类

↓

写出成员函数judge()判断是否是三角形

↓

根据不同三角形的特征写出judge1()、judge2()、judge3()判断三角形类型

↓

建立Point类，定义变量x，y，以及构造函数Point()

↓

写出成员函数getS()用于返回距离的值

↓

主函数中调用对象s的成员函数，用if语句分别输出对应情况的文字