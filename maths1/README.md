## 3 数学类：空间点、线和面

### 3.1 需求分析说明

实现三维解析几何中的点、直线和平面类，

（1） 能够实现直线的不同创建方式（例如，两个点确定一条直线，两个相交的平面确定一条直线，空间曲线的点斜式）和平面的不同创建方式（例如，三个不共线的点确定一个平面，一个点和一个法向量确定一个平面）；

（2） 能够计算相应的距离：两点之间的距离，点到直线的距离，点到平面的距离；

（3） 能够计算空间直线的单位方向向量（长度为1），空间平面的单位法向量（长度为1）；

（4） 能够判断点和线的关系，线和线的关系，点和平面的关系，线和平面的关系，平面和平面的关系。

**（5）注意：要考虑计算机中实数计算的精度误差。**

### 3.2 程序设计思路及结构说明

建立Point类，建立定义成员x，y，z分别为坐标值

↓

建立构造函数Point(),对私有成员变量进行初始化

↓

建立getX()，getY(),getZ()等函数用于返回私有成员的值

↓

建立getCheng()用于获得两个向量的点乘。getCha()用于获得两个向量的叉乘，getS()用于获得两点之间的距离

↓

建立DanWei()函数用于返回单位向量，getS1()用于返回向量的模长，并重载“-”用于计算向量

↓

建立Plane类，定义私有成员a,b,c,d确定平面的方程

↓

建立DanWei()函数用于计算平面的单位法向量,建立getA（），getB（）等函数用于返回私有成员的值

↓

建立Get（）函数用于返回z轴方向的坐标值，S（）函数用于计算点到平面的距离，Judge（）函数用于判断点和平面的关系

↓

建立Line类，定义私有成员a,b,c用于确定直线方程

↓

建立Distance（）函数用于计算点到直线的距离，建立Create（）函数用于创建直线，并使用if语句用于选择直线的创建方式

↓

建立Danwei（）函数用于计算直线的方向向量

↓

建立Judge（）函数确定线与线的关系

↓

主函数中通过if语句选择对应功能，实现功能时调用类的成员函数，并建立JudgeLine（）函数用于确定线和面的关系
