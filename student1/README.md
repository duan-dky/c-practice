## 2 系统类：学生成绩管理程序

### 2.1 需求分析说明

设计一个菜单驱动的学生成绩管理程序。输入学生的基本信息，包括学生的学号、姓名、数学、语文、英语等信息，实现如下管理功能：

（1） 能输入并显示n 个学生的基本信息。

（2） 计算学生的平均分和总分。

（3） 按总分降序进行排序。

（4） 任意输入一个学号，能显示该学生的基本信息。

（5） 可根据需要添加学生信息到指定位置，亦可在最后追加一批学生信息。

（6）文件的导入和导出（从文件中读取若干条学生信息，或者将学生信息输出到文件中）。

### 2.2 程序设计思路及结构说明

建立Student类，建立私有成员num，name，math，chinese，english，physics，公有成员sum和average

↓

建立getNum(),getNam(),getYu(),getMath(),getEng(),getPhy()等函数用于返回私有成员的值

↓

建立Cin()函数用于输入成绩以及学生信息，Cout()用于输出学生信息以及成绩，add（）函数用于添加学生信息

↓

建立Sum()函数和Average()用于计算sum以及average的值