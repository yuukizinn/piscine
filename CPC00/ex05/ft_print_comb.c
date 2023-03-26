#include <unistd.h>

void count_up(char str[])
{
    if (str[2] < '9')
    {
        str[2]++;
    }
    else if(str[1] < '8')
    {
        str[1]++;
        str[2] = str[1] + 1;
    }
    else if (str[0] < '7')
    {
        str[0]++;
        str[1] = str[0] + 1;
        str[2] = str[1] + 1;
    }
}

void ft_print_comb(void)
{
    char str[5] = "012";
    char comma_blank[2] = ", ";

    while(1)
    {
        write(1, str, 3);
        if (str[0] == '7' && str[1] == '8' && str[2] == '9')
            break;
        else
            write(1, comma_blank, 2);
        count_up(str);
    }
}

int main()
{
    ft_print_comb();
}
