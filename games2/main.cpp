# include "Games.h"
using namespace std;
int main(){
    Games b;
    char c;
    int i;
    for(i=1;;i++){
        b.Random();
        cout<<"��ѡ��1��ʯͷ2������3����"<<endl;
        int a;
        cin>>a;
    switch(b.Judge(a)){
        case 1:
        cout<<"Ӯ��"<<endl;break;
        case 0:
        cout<<"����"<<endl;break;
        case 2:
        cout<<"ƽ��"<<endl;break;
        default:break;
    }
    b.Analyze(a);
    cout<<"��Ĵ�����"<<i<<endl;
    cout<<"�Ƿ������Ϸ(y/n)";
    cin>>c;
    if(c=='n')
    break;
    }
    system("pause");
    return 0;
}