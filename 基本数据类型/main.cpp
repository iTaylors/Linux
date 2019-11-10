//一、数据类型
#include <cstdio>  //<==>#include <stdio.h>
#include <cmath>   //<==>#include <math.h>
#include <cstring> //<==>#include <string.h>

/*常识：
 * 1.变量名的第一个字符必须是字母或下画线
 * 2.整型分为short,int,long long,其中短整型short一般用不到
 *   其中整型int也被称为long int,长整型long long也被称为long long int 
 *   int 32bit              2^32 = 42亿9千万
 *   long/long long 64bit   2^64 = ...
 * 3.简单来说，需要记住的是，看到题目要求10^9以内或者说32位整数，就用int型来存放
 *   如果是10^18以内或者说64位整数，就用long long型来存放
 *   如果long long型赋大于(2^31) - 1的初值，则需要在初值后面加上LL,否则会编译错误
 * 4.对于浮点型，不要使用float，碰到浮点型的数据都应该用double来存放
 * 5.int num:此时的num就是一个整形变量
 *   而对于一个整数本身(比如5)，它不能被改变，不能被赋值那么可将其称为“整型常量”
 * 6.char c:此时的c就是一个字符变量
 *   而对于一个字符本身(比如'A'/65),它不能被改变，不能被赋值，那么可将其称为“字符常量”
 *   字符常量必须用单引号括起来，以区分是作为字符变量还是字符常量出现
 * 7.字符串：字符串是由若干字符组成的串，在C语言中没有单独一种基本数据类型可以存储(C++
 *   中有string类型)，只能使用字符数组的方式。因此这里先介绍字符串常量
 * 8.字符串常量可以作为初值赋给字符数组，并使用s%的格式输出
 * 9.不能把字符串常量赋值给字符变量，如char c = "abcd"的写法是不允许的
 * 10.符号常量和const常量：
 *    #define pi 3.14 注意末尾不加分号
 *    const double pi = 3.14;这个末尾要加分号
 *    这两种方法采用哪种都行，一般都不会出错，但推荐使用后者
 **/

/*运算符
 * 1.算术~：+、-、*、/、%、++、--
 * 2.关系~：<、>、<=、>=、==、!=
 * 3.逻辑~:&&(a,b都真返回真)、||(a,b都假返回假)、!(a真返回假，a假返回真)
 * 4.条件~:( ? : )唯一的三目运算符
 * 5.位~：
 *   <<
 *   >>
 *   &
 *   |
 *   ^
 *   ~
 * */

void test() {//i++和++i
  int a = 1,b = 1,n1,n2;
  n1 = a++;
  n2 = ++b;
  printf("n1 = %d,a = %d\n",n1,a);
  printf("n2 = %d,b = %d\n",n2,b);

  //i++是先使用i再将i加1
  //++i是先将i加1再使用i
}

void test1() {//i--和--i
  int a = 2,b = 2,m1,m2;
  m1 = a--;
  m2 = --b;
  printf("m1 = %d,a = %d\n",m1,a);
  printf("m2 = %d,b = %d\n",m2,b);

  //i--是先使用i再将i减1
  //--i是先将i减1再使用i
}

//布尔型在C++中可以直接使用，但在C语言中必须添加stdbool.h头文件才可以使用

void test2() {
  int a = 9;
  int b = 7;
  printf("a < b, %d \n",a < b);  //0
  printf("a > b, %d\n",a > b);  //1
  printf("a <= b, %d\n",a <= b); //0
  printf("a >= b, %d\n",a >= b); //1
  printf("a == b, %d\n",a == b); //0
  printf("a != b, %d\n",a != b); //1 
  
  //为什么把a == b（a等于b）当作整数输出的时候会是0？
  //事实上，系统会把a == b作为一个条件，判断其是否为真.由于a = 9,b = 7,显然是
  //不相等的，因此a == b为假(false),即输出0；
  //其它5个同理
}

void test3() {
  int a = 0,b = 1,c = 2,e = 0;
  printf("%d %d\n",a&&b,b&&c);
  printf("%d %d %d\n",a||b,b||c,a||e);
  printf("a = %d,!a = %d\n",a,!a);
  printf("c = %d,!c = %d\n",c,!c);
}

int main() {
  //test();
  //test1();
  //test2();
  test3();
  return 0;
}













