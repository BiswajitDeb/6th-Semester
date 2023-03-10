#include<stdio.h>
#include<string.h>
#include<ctype.h> // isupper() or islower() 

void cipher(char* plaintext, char* key);

int main()
{
    char message[100];
    char key[50];
    //char alphabets[26];

    printf("Enter a message : ");
    gets(message);
    //printf("%s",message);
    printf("Enter a key : ");
    gets(key);
    cipher(message,key);
    return 0;
}

//c[i]= (p[i]+k[i]) % 26
//Lowercase ASCII = [97 - 122]
//Uppercase ASCII = [65 - 90]
//As the index value foesn't start from 0 but 97 we'll have to substract that from the char ASCIIs
void cipher(char* message, char* key)
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
            cipher = (char)ciphervalue;
        }
        else
        {
            ciphervalue = ((int)message[i]-65 + (int)toupper(key[i%len]) - 65 ) % 26 + 65;
            cipher = (char)ciphervalue;
        }

        if(isalpha(message[i]))
        {
            printf("%c",cipher);
        }
        else
        {
            printf("%c",message[i]);
        }
    }
}

// #include <stdio.h>
// #include <conio.h>
// #include <ctype.h>
// #include <string.h>
// void encipher();
// void decipher();
// void main()
// {
//     int choice;
//     while (1)
//     {
//         printf("\n1. Encrypt Text");
//         printf("\t2. Decrypt Text");
//         printf("\t3. Exit");
//         printf("\n\nEnter Your Choice : ");
//         scanf("%d", &choice);
//         if (choice == 3)
//             exit(0);
//         else if (choice == 1)
//             encipher();
//         else if (choice == 2)
//             decipher();
//         else
//             printf("Please Enter Valid Option.");
//     }
// }
// void encipher()
// {
//     unsigned int i, j;
//     char input[50], key[10];
//     printf("\n\nEnter Plain Text: ");
//     scanf("%s", input);
//     printf("\nEnter Key Value: ");
//     scanf("%s", key);
//     printf("\nResultant Cipher Text: ");
//     for (i = 0, j = 0; i < strlen(input); i++, j++)
//     /* i will be the plain text and represent the column of table and
//     j will repeate/reset the after key length */
//     {
//         if (j >= strlen(key))
//         {
//             j = 0;
//         }
//         printf("%c", (((toupper(input[i]) - 65) + (toupper(key[j]) - 65)) % 26) + 65);
//         // 65+(   (  (toupper(input[i])-65)   +  (toupper(key[j])-65) )   %26     )
//     }
// }
// void decipher()
// {
//     unsigned int i, j;
//     char input[50], key[10];
//     int value;
//     printf("\n\nEnter Cipher Text: ");
//     scanf("%s", input);
//     printf("\n\nEnter the key value: ");
//     scanf("%s", key);
//     for (i = 0, j = 0; i < strlen(input); i++, j++)
//     {
//         if (j >= strlen(key))
//         {
//             j = 0;
//         }
//         value = (toupper(input[i]) - 64) - (toupper(key[j]) - 64);
//         if (value < 0)
//         {
//             value = value * -1;
//         }
//         printf("%c", 65 + (value % 26));
//     }
// }