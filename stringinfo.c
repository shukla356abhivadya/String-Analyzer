#include<stdio.h>
int main()
{
    char str[100];
    int i,vowel=0,consonant=0,digit=0,space=0,special=0;
    puts("Enter the sentence");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            switch(str[i])
            {
                case 'a':
                vowel++;
                break;
                case 'e':
                vowel++;
                break;
                case 'i':
                vowel++;
                break;
                case 'o':
                vowel++;
                break;
                case 'u':
                vowel++;
                break;
                case 'A':
                vowel++;
                break;
                case 'E':
                vowel++;
                break;
                case 'I':
                vowel++;
                break;
                case 'O':
                vowel++;
                break;
                case 'U':
                vowel++;
                break;
                default :
                consonant++;
            }
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("\nNumber of vowels = %d",vowel);
    printf("\nNumber of consonants = %d",consonant);
    printf("\nNumber of digits = %d",digit);
    printf("\nNumber of special symbols = %d",special);
    printf("\n\nNumber of Words = %d",space+1);
    return 0;
}