# include "Games.h"
using namespace std;
int main(){
    int time1;
    cout<<"��������Ϸʱ�䣺";
    cin>>time1;
    Games a(time1);
    for(;;){
    time_t i,k;
    cout<<"�������";
    int count;
    a.Born();
    k=time(NULL);
    cin>>count;
    while(a.getN()!=count){
    a.Judge(count);
    cin>>count;
    i=time(NULL);
    if(a.JudgeTime((int)i-k)){
    cout<<"���ź���δ���ڹ涨ʱ���ڲ³���ȷ���֣�������Ϊ"<<a.getN()<<endl;
    break;
    }
    }
    if(a.getN()==count){
    cout<<"��ϲ����ȷ�³�����"<<a.getN()<<endl;
    }
    cout<<"�Ƿ������Ϸ:y/n"<<endl;
    char c;
    cin>>c;
    if(c=='n')
    break;
    }
    system("pause");
    return 0;
}