#include<stdio.h>
#include<string.h>
#include<ctype.h> // isupper() or islower() 

void cipher(char* plaintext, char* key, char* encrypted);

int main()
{
    char message[100];
    char key[50];
    char encrypted[100];
    //char alphabets[26];

    printf("Enter a message : ");
    gets(message);
    //printf("%s",message);
    printf("Enter a key : ");
    gets(key);
    cipher(message,key,encrypted);
    return 0;
}

//c[i]= (p[i]+k[i]) % 26
//Lowercase ASCII = [97 - 122]
//Uppercase ASCII = [65 - 90]
//As the index value foesn't start from 0 but 97 we'll have to substract that from the char ASCIIs
void cipher(char* message, char* key, char* encrypted)
{
    int i;
    char cipher;
    int ciphervalue;
    int len = strlen(key);

    for(i=0;i<strlen(message);i++)
    {
        if(islower(message[i]))
        {
            ciphervalue = ((int)message[i]-97 + (int)tolower(key[i%len]) - 97 ) % 26 + 97;
            //cipher = (char)ciphervalue;
            encrypted[i]= (char)ciphervalue;
        }
        else
        {
            ciphervalue = ((int)message[i]-65 + (int)toupper(key[i%len]) - 65 ) % 26 + 65;
            //cipher = (char)ciphervalue;
            encrypted[i]= (char)ciphervalue;
        }

        if(isalpha(message[i]))
        {
            //printf("%c",cipher);
            printf("%c", encrypted[i]);
        }
        else
        {
            printf("%c",message[i]);
        }
    }
}