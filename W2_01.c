#include <stdio.h>  
#include <string.h>
int main()  
{  
    char first_string[20];  
    char second_string[20];  
    int i,l;
    printf("Enter the first string");  
    gets(first_string);  
    printf("\nEnter the second string");  
    gets(second_string);  
    for(i=0;first_string[i]!='\0';i++)
    {  
    for(int j=0;second_string[j]!='\0';j++)  
    {  
        
        first_string[i]=second_string[j];  
        i++;  
    } 
    first_string[i]='\0';
    }
   l=strlen(first_string);
   for (int m=l;m>=0;m--)
   {
     printf("%s",first_string[m]);
   }
return 0;  
}