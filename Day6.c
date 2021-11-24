#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int n,i,count;
    char str[100];
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i] = ' ' || str[i] = '\t')
        {
            n++;
        }

    }
    for(i=0;str[i]!='\0';i++){
        if(str[i] == 'a'||'e'||'i'||'o'||'u')
        {
            count++;
        }

        count++;
    }
    if(count % 2 == 0){

        printf("2\n");
    }
    else
        printf("1\n");


    }
}
