//WAP TO DISPLAY PERSONAL INFORMATION
#include<stdio.h>
int main()
{
    char n[10],b[10],h[10];
    int r;
    printf("\nEnter your name:\n");
    scanf("%s",&n);
    printf("\nEnter your Branch:\n");
    scanf("%s",&b);
    printf("\nEnter your hobbies:\n");
    scanf("%s",&h);
    printf("\nEnter your roll number:\n");
    scanf("%d",&r);
    printf("\nName is %s",n);
    printf("\nbranch is %s",b);
    printf("\nroll is %d",r);
    printf("\nhobbies is %s",h);
    return 0;
}
