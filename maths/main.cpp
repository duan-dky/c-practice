# include "Triangle.h"
using namespace std;
int main(){
    double a,b;
    double c,d;
    double e,f;
    cin>>a>>b>>c>>d>>e>>f;
    Point g(a,b);
    Point h(c,d);
    Point i(e,f);
    Triangle s;
    Point s1=g-h;
    Point s2=h-i;
    Point s3=g-i;
    double j=s1.getS(),k=s2.getS(),l=s3.getS();
    if(s.judge(j,k,l))
       if(s.judge1(j,k,l))
         cout<<"�ȱ�������";
       else if(s.judge2(j,k,l)&&!s.judge3(j,k,l))
         cout<<"����������";
       else if(s.judge3(j,k,l)&&!s.judge2(j,k,l))
         cout<<"ֱ��������";
       else if(s.judge2(j,k,l)&&s.judge3(j,k,l))
         cout<<"����ֱ��������";
       else
         cout<<"��ͨ������";
    else
        cout<<"����������";
        system("pause");
    return 0;
}