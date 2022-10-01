//code, that take input and manupulate it 
#include<stdio.h>
#include<conio.h>
main()
{
  int year,byear,age;
  clrscr();
  printf("Enter the running year: ");
  scanf("%d",&year);
  printf("Enter the your year of birth: ");
  scanf("%d",&byear);
  age=year-byear;
  printf("You are %d year(s) old",age);
  getch();
}
