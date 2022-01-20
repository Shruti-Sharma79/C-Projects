#include<stdio.h>
void words(char *str)
{
    int i,word=1;
    i=0;
    while(str[i]!='\0')
    {
    if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        {
            word++;
        }
    i++;
    }
    printf("NUMBER OF WORDS PRESENT IN THE GIVEN STRING ARE : %d ",word);
}
void vowelCon(char *str)
{
    int i,vowel=0,consonant=0;
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||
        str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        {
            consonant++;
        }
        i++;
    }
    printf("NUMBER OF VOWELS PRESENT IN THE STRING IS : %d \n",vowel);
    printf("NUMBER OF CONSONANTS PRESENT IN THE STRING IS  : %d \n",consonant);
}
void substring(char *str)
{
    int i,j,l;
    char search[100];
    printf("ENTER THE SUBSTRING YOU WANT TO SEARCH: ");
    gets(search);
    for (l = 0; search[l] != '\0'; l++);
    for(i=0,j=0;str[i]!='\0'&&search[j]!='\0';i++)
    {
        if (str[i]==search[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }
    if(j==l)
    printf("%s IS PRESENT IN THE STRING",search);
    else
    printf("%s IS NOT PRESENT IN THE STRING ",search);
}
void upLower(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
    }
    printf("IN UPPER CASE: %s \n",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("IN LOWER CASE : %s \n",str);
}
void encoding(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<'Z'||str[i]>='a'&&str[i]<'z'||str[i]>='0'&&str[i]<'9')
        {
            str[i]=str[i]+1;
        }
        else if(str[i]=='Z')
        {
            str[i]='A';
        }
        else if(str[i]=='z')
        {
            str[i]='a';
        }
        else if(str[i]=='9')
        {
            str[i]='0';
        }
        else if(str[i]==' ')
        {
            str[i]=' ';
        }
        else
        {
            str[i]='.';
        }
    }
    printf("ENCODED STRING IS : %s ",str);
}
void main()
{
    char *str[100];
    int c;
    printf("\n\n\n\n\n\n");
    printf("\n");
    printf("\n");
     printf("*****************************************************************************************************************************************\n");
    printf("\n                                                         WELCOME                             \n");
    printf("\n                                                 STRING MANIPULATION PROJECT                  \n");
    printf("\n ************************************************************************************************************************************\n\n");
    a:
    printf("\n");
    printf("\nChoose an option: \n");
    printf("\n");
    printf("\n\t1. Find number of words present in a string\n");
    printf("\n");
    printf("\t2. Find the number of vowels and consonants present in a string\n");
    printf("\n");
    printf("\t3. Search a substring present in a string\n");
    printf("\n");
    printf("\t4. Print the string in lower case or upper case\n");
    printf("\n");
    printf("\t5. String Encoding\n");
    printf("\n");
    printf("\t6. Exit\n");
    printf("\n");
    printf("\n Enter your choice: ");
    printf("\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        fflush(stdin);
        printf("ENTER A STRING: ");
        gets(str);
        words(str);
        goto a;
        break;
        case 2:
        fflush(stdin);
        printf("ENTER A STRING: ");
        gets(str);
        vowelCon(str);
        goto a;
        break;
        case 3:
        fflush(stdin);
        printf("ENTER A STRING: ");
        gets(str);
        substring(str);
        goto a;
        break;
        case 4:
        fflush(stdin);
        printf("ENTER A STRING: ");
        gets(str);
        upLower(str);
        goto a;
        break;
        case 5:
        fflush(stdin);
        printf("ENTER A STRING: ");
        gets(str);
        encoding(str);
        goto a;
        break;
        case 6:
        break;
        default:
        printf("\n\nENTER CORRECT NUMBER PLEASE.\n\n");
        goto a;
    }
}
