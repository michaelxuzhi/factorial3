#include<stdio.h>
int main()  
{ 
  int i,n,factorial=1,c;     
  printf("������һ�����֣� ");
  scanf("\n%d",&n);
  for(i=1;i<=n;i++)
  {
    c=factorial;
    factorial=i*factorial;
    printf("factorial=%d*%d\n",i,c);
  }
	printf("����������Ľ׳�%d!=%ld\n",n,factorial);
	return 0;
}