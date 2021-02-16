#include <iostream>
using namespace std;
int main(){
  //1输入高考分数
  int score=0;
  cout<<"请输入分数："<<endl;
  cin>>score;
  //2.显示高考分数
  cout<<"您输入的分数为："<<score<<endl;
  //3.判断
  if (score>600)
  {
    cout<<"您考上了一本"<<endl;
  }
     //大于600
     if(score>700)
     {
     cout<<"牛逼"<<endl;
     }
       //大于700
         //大于750
         if (score>750)
         {
           cout<<"吹牛逼被雷劈"<<endl;
         }


    return 0;
  }
