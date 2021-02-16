#include <iostream>
using namespace std;
int main(){

int a=10;
int b=20;
int c=0;

c=(a>b?a:b); //a大于b的话返回,不然就返回c
cout<<"c="<<c<<endl;

a > b ? a : b = 100;//a大于b的话返回a，a就被赋值100；小月话返回b，b被赋值100
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;

    return 0;
  }
