# include<Stdio.h>
int main()
{
  int a,b;
  printf("enter the two numbers\n");
  scanf("%d %d", &a&b);
  a = a+b;
  b = a-b;
  a = a-b;
  printf("after the swapping %d %d", a,b);
  }
