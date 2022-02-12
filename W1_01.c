#include <stdio.h>
int main()
{
  char name[40],branch[40],hobbies[40];
  int roll_number;
  printf("\nEnter your name\n");
  gets(name);

   printf("\nEnter your branch\n");
  gets(branch);

   printf("\nEnter your hobbies\n");
  gets(hobbies);

   printf("\nEnter your rollno.\n");
   scanf("%d",&roll_number);
  

  printf("Name is %s\n",name);
  printf("Branch is %s\n",branch);
  printf("Hobbies is %s\n",hobbies);
  printf("roll is %d\n",roll_number);

  return 0;
}
