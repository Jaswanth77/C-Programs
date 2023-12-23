#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    printf("Enter the string 1:");
    scanf("%s", str1);
    printf("Enter the string 2:");
    scanf("%s", str2);
    int result = Anagram(str1, str2);
    if (result == 0)
        printf("false");
    else
    {
        printf("true");
    }
    return 0;
}

int Anagram(char str1[], char str2[])
{
	int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;
    int frequency[15] = {0};

    for (i = 0; i < len1; i++)
    {
        int id = str1[i] - 'a';
        frequency[id]++;
    }

    for (i = 0; i < len2; i++)
    {
        int idx = str2[i] - 'a';
        frequency[id]--;
    }

    for (i = 0; i < 15; i++)
    {
        if (occurences[i] != 0)
            return 0;
    }
    return 1;
}
