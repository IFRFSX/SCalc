/*
程序名称：学生党专用计算器 Version 0.2
作者：冰焰火灵X <1079092922@qq.com>
本程序是自由软件，您可以根据 GNU LGPL 许可证，复制传播，修改或者重新发布它。许可证版本应当是第3版，或者（由您选择的）更高版本。
版权所有(C) 2018 冰焰火灵X
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

double x,a,b,c,d;
t0:
x=0;
a=0;
b=0;
c=0;
d=0;

printf("\n");
printf("=============================================\n");
printf("学生党专用计算器 Version 0.2 | by：冰焰火灵X.\n");
printf("License: GNU LGPL v3+ \n");
printf("1. 加减法\n");
printf("2. 乘除法\n");
printf("3. 20次方\n");
printf("4. 指定次方和开方\n");
printf("5. 关闭软件\n");
printf("您好！请决定您想要的操作：\n");
scanf("%lf",&x);
if(x==1){
goto one;
}
else if(x==2){
goto two;
}
else if(x==3){
goto cifang;
}
else if(x==4){
goto kaifang;
}
else if(x==5){
goto endx;
}
else {
goto t0;
}

one:
    printf("请输入加数，或者被减数：\n");
    scanf("%lf",&a);
    printf("请输入第二个加数，或者减数(如果是减数，请在减数前面加个负号)：\n");
    scanf("%lf",&b);
    c=a+b;
    printf("答案是：%lf\n",c);
    printf("============\n");
    goto t0;

two:
    printf("请输入第1个乘数或者被除数：\n");
    scanf("%lf",&a);
    printf("请输入第2个乘数或者除数：\n");
    scanf("%lf",&b);
    c=a*b;
    d=a/b;
    printf("乘法答案是：%lf\n",c);
    printf("除法答案是：%lf\n",d);
    printf("============\n");
    goto t0;

cifang:

    printf("请输入根：\n");
    scanf("%lf",&a);
    b=1;
    c=c+a;
    while(b<=19){
    b=b+1;
    c=c*a;
    printf("本次（第%lf次方）答案：%lf\n",b,c);
}
    printf("答案是：%lf\n",c);
    printf("============\n");
    goto t0;

kaifang: /* 计算次方和开方 */

    printf("请输入您的次方根：\n");
    scanf("%lf",&a);
    printf("请输入您的指数(可以在指数前面加负号)：\n");
    scanf("%lf",&b);
    c=pow(a,b);
    d=pow(a,1/b);
    printf("乘方答案是：%lf\n",c);
    printf("开方答案是：%lf\n",d);
    printf("============\n");
    goto t0;
endx:
printf("goodbye!<abcd>: \n");
scanf("%lf",&d);
return 0;
}
