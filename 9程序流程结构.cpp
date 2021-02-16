/*
1.顺序结构：程序按顺序执行，不发生跳转
2.选择结构：依据条件是否满足，有选择的执行相应功能
3.循环结构：依据条件是否满足，循环多次执行某代码
4.if语句： 单行格式，多行格式，多条件格式
*/


//单行if
#include <iostream>
using namespace std;
int main(){
  int score = 0;
  cout<<"请输入您的分数："<<endl;
  cin>>score;
  if (score>60)//没有分号
  {
    cout<<"恭喜你及格了"<<endl;
  }
    return 0;
  }



//多行
  #include <iostream>
using namespace std;
int main(){
  int score =0;
  cout<<"请输入您的分数："<<endl;
  cin>>score;
  cout<<"您输入的分数为："<<score<<endl;
  if(score>600)
  {
    cout<<"恭喜你考上了重本大学"<<endl;
    }
  else 
  {
    cout<<"没考上重本"<<endl;
    }

    return 0;
  }




//多条件if#include <iostream>
using namespace std;
int main(){
  int score =0;
  cout<<"请输入您的分数："<<endl;
  cin>>score;
  cout<<"您输入的分数为："<<score<<endl;
  if(score>500)
  {
    cout<<"恭喜你考上了二本大学"<<endl;
    }
  else if(score>600)
  {
    cout<<"恭喜你考上一本"<<endl;
    }
  else if(score>660)
  {
    cout<<"恭喜你考上清华"<<endl;
  }
  else 
  {
  cout<<"复读"<<endl;
  }

    return 0;
  }
