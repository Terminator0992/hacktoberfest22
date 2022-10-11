#include<stdio.h>
#include<string.h>

int vowel_check(char);
int main()
{
    char inputs[100], output[100];
    int i, d = 0;
    printf("Enter some text:\n");
    gets(inputs);
    for (i = 0; inputs[i] != '\0'; i++)
    {
        if (vowel_check(inputs[i]) == 0)
        {
            output[d] = inputs[i];
            d++;
        }
    }
    output[d] = '\0';
    strcpy(inputs, output);
    printf("The text after deleting Vowels letters: %s\n", inputs);
    return 0;

}
