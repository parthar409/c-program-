#include <stdio.h>
 int main()
  {
    int totalNo,count =1 ;
    float number ,avarage, sum = 0;
    printf("how many numbers ? ");
    scanf("%d",&totalNo);
    do{
printf("enter tha number %d : " , count);
scanf("%f",&number);
sum +=number;
count++;
    }
    while(count <=totalNo);
    avarage =sum/totalNo;

    printf("Avarage is :  %f/n" ,avarage);
 return 0;
  } 