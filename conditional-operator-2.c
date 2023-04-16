#include <stdio.h>
 int main()
  {
    int x,y,result;
    printf("enter tha x and y number : ");
    scanf("%d%d",&x,&y);
    result=(x<=y) ? x:y;
    printf("min number is %d\n",result);
 return 0;
  } 