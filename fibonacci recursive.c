#include<stdio.h>
 int fibo(int n);
 int main()
          {
              int n,i,sum=0;
              printf("Enter n\n");
              scanf("%d",&n);
              for(i=1;i<=n;i++)
              // sum=sum+fibo(i);
              printf("%d ",fibo(i));

          }
          int fibo(int n)
          {
              if(n==1)
                return 0;
              if(n==2||n==3)
                return 1;
              else
                return fibo(n-1)+fibo(n-2);
          }

