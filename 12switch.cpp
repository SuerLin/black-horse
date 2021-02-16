/*
switch（表达式）
{
  case结果1：执行语句；break；
  case结果2：执行语句；break；
  case结果3：执行语句；break；
  .
  .
  .
  default：执行语句；break；//前面几种代码都没出现执行默认代码
}
*/
#include <iostream>
using namespace std;
int main(){
//给电影进行打分
//10-9经典
//8-7很好
//6-5垃圾

cout<<"请打分"<<endl;
int score=0;
cin>>score;

switch(score)//score是判断依据
{
  case 10:
      cout<<"您认为是经典电影"<<endl;
      break;//退出当前分支不然还继续往后
  case 9:
      cout<<"您认为是经典电影"<<endl;
      break;
  case 8:
      cout<<"您认为是很好电影"<<endl;
      break;
  case 7:
      cout<<"您认为是很好电影"<<endl;
      break;
  case 6:
      cout<<"您认为是垃圾电影"<<endl;
      break;
  case 5:
      cout<<"您认为是垃圾电影"<<endl;
      break;
  default://其他情况
      cout<<"您认为是国产电影"<<endl;
      break;
}

 return 0;

}

/*
switch缺点：只能是int或float，不可以是区间
switch优点：结构清晰，执行效率高
*/