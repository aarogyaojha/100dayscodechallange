#include <stdio.h>
#include <string.h>

int main() {
    char string1[100],flag=0,i;
    printf("enter the word");
    scanf("%s",string1);
    int length=strlen(string1);
    
    for(i=0;i<length;i++)
    {
        if (string1[i]!=string1[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("%s is not palindrome",string1);
    }
    else
    {
        printf("%s is palindrome",string1);
    }
    
    return 0;
}
