#include<stdio.h>

int  main()
{
 unsigned int i,n,j;
 scanf("%d",&n);
 unsigned int a[n];
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if((a[i]+a[j])==0)
   {
    printf("%d %d",a[i],a[j]);
    printf("\n");
    break;
   }
  }
 }
return 0;}
