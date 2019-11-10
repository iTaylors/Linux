//二、顺序结构
#include <cstdio>
#include <cmath>

/*
 * 1.赋值运算符可以通过将其他运算符放在前面来实现赋值操作的简化
 *   n /= m + 1 <==> n = n / (m + 1)
 *   尽量写成 n /= (m + 1)的形式(就是多加了一个括号)，避免因为基础不好而产生一些错误
 * 2.scanf("%d",&n):在C语言中，变量在定义之后，就会在计算机内存中分配一块空间给这个变量，
 *   该空间在内存中的地址称为变量的地址。为了得到变量的地址，需要在变量前加一个&(称为
 *   取地址运算符)，也就是"&变量名"的写法
 * 3.double类型的变量：
 *   其输出格式是%f,输入格式是%lf 
 *   在有些系统中如果把输出格式写成%lf倒也不会出错，不过尽量还是按标准来
 * 4.要求输出单个字符'%' 和 '\':
 *   printf("%%");
 *   printf("\\");
 * 5.三种使用的输出格式：
 *   %md
 *   %0md
 *   %.mf
 * 6.typedef:起别名关键字
 * 7.常用math函数*/

void test() {
  int hh,mm,ss;
  scanf("%d:%d:%d",&hh,&mm,&ss);
  printf("%d:%d:%d\n",hh,mm,ss);

  //scanf的双引号内的内容其实就是整个输入，只不过把数据换成它们对应的格式符并
  //把变量的地址按次序写在后面而已。
}

void test1() {
  //如果要输入"3 4"这种用空格隔开的两个数字，两个%d之间可以不加空格
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d %d\n",a,b);
  //1.在敲击 scanf("%d%d",&a,&b)的时候，两个%d之间
  //可以不加空格的原因是，除了%c外，scanf对其它格式符(如%d)的输入是以空白符(即空格、换行等)
  //为结束判断标志的。
  //因此除非使用%c把空格按字符读入计算机，其他情况都会自动跳过空格(换句话说，在
  //控制台敲击3 和 4的时候，你想敲几个空白符就敲几个空白符---当然比如至少要敲击一个空白符(如空格))
  
  scanf("%d %d",&a,&b);
  printf("%d %d\n",a,b);
  //2.在敲击 scanf("%d%d",&a,&b)的时候，两个%d之间加上空格当然也对了，你开心就好
}

void test2() {
  //字符数组使用%s读入的时候，以空格跟换行为读入结束的标志：
  char str[10];
  scanf("%s",str);   //我现在输入：xiao bai
  printf("%s\n",str);//输出结果是：xiao
}

void test3() {
  //scanf的%c格式是可以读入空格跟换行的，因此下面的例子中字符c是一个空格：
  int a;
  char c,str[10];
  scanf("%d%c%s",&a,&c,str);
  printf("a=%d,c=%c,str[10]=%s\n",a,c,str);
}

void test4() {
  printf("%%\n");
  printf("\\");
}

void test5() {
  //int            :2^32 = 4294967296  42亿9千万
  //long long/long :2^64 =  
  typedef long long LL;
  LL a = 12345678900012345LL;
  LL b = 34282834787298562LL;
  printf("a + b = %lld\n",a + b);
}

void test6() {
  int a = 123,b = 1234567;
  printf("%5d\n",a);
  printf("%5d\n",b);
  //使不足m位的int型变量以m位进行右对齐输出(当然如果变量超过m位，就按照原样输出)
  
  printf("\n");
  printf("%05d\n",a);
  printf("%05d\n",b);
  printf("\n");
  //使不足m位的int型变量以m位进行右对齐输出，前面补0(当然如果变量超过m位，就按照原样输出)
  
  double d = 12.3456;
  printf("d = %f\n",d);
  printf("%.0f\n",d);
  printf("%.1f\n",d);
  printf("%.2f\n",d);
  printf("%.3f\n",d);
  printf("%.4f\n",d);
}

void test7() {//math函数
  double a = -12.56;
  printf("|a| = %.2f\n",fabs(a));//fabs(double x):对double型变量取绝对值

  double d1 = -5.2,d2 = 5.2;
  printf("%.0f %.0f\n",floor(d1),ceil(d1)); //-6 -5
  printf("%.0f %.0f\n",floor(d2),ceil(d2)); //5  6
  //floor(double x):对double型变量向下取整
  //ceil(double x) :对double型变量向上取整
}

void test8() {
  //round函数：先四舍五入，然后取整，返回值是double类型
  double d1 = round(3.40);
  double d2 = round(3.45);
  double d3 = round(3.50);
  double d4 = round(3.55);
  double d5 = round(3.60);
  printf("%f 精确到小数点后0位是 %.0f\n",d1,d1); //3
  printf("%f 精确到小数点后0位是 %.0f\n",d2,d2); //3
  printf("%f 精确到小数点后0位是 %.0f\n",d3,d3); //4
  printf("%f 精确到小数点后0位是 %.0f\n",d4,d4); //4
  printf("%f 精确到小数点后0位是 %.0f\n",d5,d5); //4
}

void test9() {//常用函数
  //pow(double r,double p):求r ^ p
  double d = pow(2.0,3.0);
  printf("2 ^ 3 = %f\n",d);

  //sqrt(double x):开方函数
  double a = sqrt(2.0);
  printf("2开方 = %f\n",a);

  //log(double x):求以自然对数为底x的对数
  double c = log(1.0);
  printf("log(1.0) = %f\n",c);

  //C语言中没有对任意底数求对数的函数，因此必须使用换底公式来将不是以自然对数为底的对数
  //转换为以e为底的对数
  double y = log(7) / log(3);
  printf("log以3为底7的对数是：%f\n",y);

}

const double pi = acos(-1.0);
//这里把pi(Π定义为精确值acos(-1.0) 因为cos(pi) = -1
void test10() {//三角函数
  double a = 45;//度(60度制)
  printf("45度的三角函数值为：\n");
  printf("sin45 = %.9f\n",sin(pi * a / 180));
  printf("cos45 = %.9f\n",cos(pi * a / 180));
  printf("tan45 = %.9f\n",tan(pi * a / 180));
  printf("Π= %.77f\n",pi);
}

void test11() {//反三角函数
  double a = asin(1);
  double b = acos(-1);
  double c = atan(0);
  printf("%f %f %f\n",a,b,c);
}

double _x1(double a,double b,double c) {
  return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

double _x2(double a,double b,double c) {
  return (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}

int main() {
  //test();
  //test1();
  //test2();
  //test3();
  //test4();
  //test5();
  //test6();
  //test7();
  //test8();
  //test9();
  //test10();
  //test11();
  
#if 0
  int T;
  scanf("%d",&T);
  while(T--) {
    printf("888888888\n");
    printf("Duke\n");
    printf("Marquis\n");
    printf("Earl\n");
    printf("viscount\n");
    printf("Baron\n");
    printf("888888888\n");
  }
#endif

#if 0
  int a,b;
  while(scanf("%d %d",&a,&b) != EOF) {
    printf("%d\n",a + b);
  }
#endif 


  double a,b,c;
  double x1,x2;
  int T;
  scanf("%d",&T);
  while(T--) {
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a == 0) break;
    if(b * b - 4 * a * c < 0) {
      printf("no real roots!\n");
      continue;
    }
    
    x1 = _x1(a,b,c); 
    x2 = _x2(a,b,c);
    printf("x1 = %7.2f\n",x1);
    printf("x2 = %7.2f\n",x2);
    //%mf  :使不足m位的double型变量以m位进行右对齐输出，其中高位用空格补齐
    //%.nf :让浮点数保留m位小数输出
    //%m.nf:二者结合使用(如%7.2f <=> 结果输出时，宽度占7位，其中小数部分2位)
  }

  return 0;
}





















