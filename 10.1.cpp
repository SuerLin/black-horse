//三只小猪比重的列子
#include <iostream>
using namespace std;
int main(){
  int num1=0;//创建三只小猪的重量
  int num2=0;
  int num3=0;

  cout<<"请输入小猪A的体重："<<endl;//输入小猪们的体重
  cin>>num1;
  cout<<"请输入小猪B的体重："<<endl;
  cin>>num2;
  cout<<"请输入小猪C的体重："<<endl;
  cin>>num3;

  if(num1>num2)//A比B重
  {
    if(num1>num3)//A比C重
    {
      cout<<"小猪A最重"<<endl;
    }
  }
  else//B比A重
  {
    if(num2>num3)//B比C重
    {
      cout<<"小猪B最重"<<endl;
    }
    else//C比B重
    {
      cout<<"小猪C最重"<<endl;
    }
    }

    return 0;
  }
