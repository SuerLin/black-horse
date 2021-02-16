#include <iostream>
using namespace std;
int main(){

float f1=3.14f;
/*float后面习惯性加一个f来提醒是单精度，不然电脑会以为是双精度*/
double f2=3.1415926;
cout<<"f1="<<f1<<endl;
cout<<"f2="<<f2<<endl;//默认情况下只显示6位
cout<<"单精度所占的内存空间为"<<sizeof(f1)<<"个字节"<<endl;
cout<<"双精度所占的内存空间为"<<sizeof(f2)<<"个字节"<<endl;

return 0;
}
