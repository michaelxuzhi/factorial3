#include<stdio.h>
int main()  
{ 
  int i,n,factorial=1,c;     
  printf("请输入一个数字： ");
  scanf("\n%d",&n);
  for(i=1;i<=n;i++)
  {
    c=factorial;
    factorial=i*factorial;
    printf("factorial=%d*%d\n",i,c);
  }
	printf("你输入的数的阶乘%d!=%ld\n",n,factorial);
	return 0;
}