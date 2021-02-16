/*不能修改的数据
1. 宏常量: #define 常量名 常量值 
以后名和值都不能变化了
2. 变量前加const变成常量: const 数据类型 常量名 = 常量值
*/


#include <iostream>
using namespace std;
//1.#define 宏常量；写在int main()外
//2.const修饰的变量；写在int main()里

#define Day 7
int main(){

cout<<"一周有几天" <<"天"<<Day
<<endl;

  return 0;
}