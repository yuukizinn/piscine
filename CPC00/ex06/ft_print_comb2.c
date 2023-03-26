#include <unistd.h>

void    print_write(char str1[], char str2[])
{
    write(1, str1, 2);
    write(1, " ", 1);
    write(1, str2, 2);
}

void    count_up(char str1[], char str2[])
{
    str2[1]++;
    while(str2[1] > '9')
        {
        if (str2[1] > '9')
        {
            str2[0]++;
            str2[1] = '0';
        }
        if(str2[0] > '9')
        {
            str1[1]++;
            str2[0] = str1[0];
            str2[1] = str1[1] + 1;
        }
        if (str1[1] > '9')
        {
            str1[0]++;
            str1[1] = '0';
            str2[0] = str1[0];
            str2[1] = str1[1] + 1;
        }
    }
}

void    ft_print_comb2(void)
{
    char str1[2];
    char str2[2];

    str1[0] = '0';
    str1[1] = '0';
    str2[0] = '0';
    str2[1] = '0';

    while (1)
    {
        count_up(str1, str2);
        if (str1[0] == '9' && str1[1] == '8' && str2[0] == '9' && str2[1] == '9')
        {
            print_write(str1, str2);
            break;
        }
        else
        {
            print_write(str1, str2);
            write(1, ",", 1);
            write(1, " ", 1);
        }
    }
}

int main()
{
    ft_print_comb2();
}
