//WAP TO ENTER TWO NO. & PERFORM ALL ARITHMETIC OPERATIONS
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the numbers here\n");
    scanf("%d%d",&a,&b);
    switch(1)
    {
        case 1:
        printf("\nThe add of two nos %d\n",a+b);
        
        case 2:
        printf("\nThe sub of two numbers is %d\n",a-b);
        
        case 3:
        printf("\nThe multiply of two nos is %d\n",a*b);
        
        case 4:
        printf("\nThe divide of two nos is %d\n",a/b);
    
    }
return 0;
}
