#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void cipher_text(string plaintext, int key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        //check if argv[1] is a positive digit
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        //convert argv[1] to a int
        int key = atoi(argv[1]);

        printf("Success\n" "%d\n", key);

        string plaintext = get_string("Plaintext: ");

        printf("ciphertext: ");

        //encipher
        //output ciphertext
        cipher_text(plaintext, key);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    printf("\n");
}

void cipher_text(string plaintext, int key)
{
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {
            printf("%c", ((plaintext[i] - 'a' + key) % 26) + 'a');
        }

        if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            printf("%c", ((plaintext[i] - 'A' + key) % 26) + 'A');
        }

        else if (isalpha(plaintext[i]) == false)
        {
            printf("%c", plaintext[i]);
        }

    }
}