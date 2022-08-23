#include<stdio.h>

int main()
{
    char str[100];
    int i,count = 0;
    printf("Enter a string:-\n");
    scanf("%s",str);
    
    //iterate the string
    for(i = 0; str[i] != '\0'; i++)
    {
        //check each char with any vowel. 'a','e','i','o','u'.
        //check each char with any vowel uppercse. 'A','E','I','O','U'.
        if( str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' || 
            str[i] == 'o' || 
            str[i] == 'u' ||
            str[i] == 'A' ||
            str[i] == 'E' ||
            str[i] == 'I' ||
            str[i] == 'O' ||
            str[i] == 'U' )
        {
            //if equal increment the count
            count++;
        }
    }
    
    //print the result
    printf("vowel count = %d\n",count);
    
    return 0;
}