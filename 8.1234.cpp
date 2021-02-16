// 加减乘除
int a1=10;
int b1=3;
cout<<a1+ba<<endl;
cout<<a1-ba<<endl;
cout<<a1*ba<<endl;
cout<<a1/ba<<endl;

//1.前置递增
int a=10;
++a；//变量加1，再进行运算
inta2=++a*10；

//2.后置递增
int b=10;
b++；//变量先进行运算，再加1





//赋值运算符号
//+= -= *= /= %=





//比较运算符号(判断)
== ！= > < >= <=
cout<<(a==b)<<endl;






//逻辑运算符
//！非 ：真变假，假变真
int a=10
cout<<!a<<endl;   
//结果为0，因为除了0都是真，非真及0
cout<<!!a<<endl; 
//结果还是a


//&&与 ：都真才真,其余为假
#include <iostream>
using namespace std;
int main(){
  int a =10;
  int b =10;

  cout<<(a&&b)<<endl;

  return 0;
}

//||或：全假才假，其余为真