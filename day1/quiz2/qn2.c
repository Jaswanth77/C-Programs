#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    int conditions[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        conditions[i] = 0;
    }
    printf("Enter the password:");
    scanf("%s", &password);
    int len = strlen(password);
    for (i = 0; i < len; i++)
    {
        if (password[i] > 96 && password[i] < 123)
            conditions[0] = 1;
        if (password[i] > 64 && password[i] < 91)
            conditions[1] = 1;
        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*' || password[i] == '(' || password[i] == ')' || password[i] == '-' || password[i] == '+')
            conditions[2] = 1;
        if (len >= 8)
            conditions[3] = 1;
        if (password[i] > 47 && password[i] < 58)
            conditions[4] = 1;
    }
    int flag = 1;
    for (i = 0; i < 5; i++)
    {
        flag = flag & conditions[i];
    }

    if (flag == 1)
        printf("Strong password");
    else
        printf("Weak password");

    return 0;
}
