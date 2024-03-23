#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int        is_base_valid(char *base)
{
    int    i;
    int    b;

    i = 0;

    while (base[i] != '\0')
    {
        if(base[i] < ' ' || base[i] == '+' || base[i] == '-')    
        {
            return (0);
        }

        b = 0;

        while(base[b])
        {
            if(i != b && base[i] == base[b])
            {
                return(0);
            }
                  b++;
        }
        i++;
    }

    if (i < 2)
    {
        return (0);
    }

    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
        int  a;
        long n;

        n = nbr;
        a = is_base_valid(base);

        if (a == 0)
        {
             return ;
        }

        if (n < 0)
        {
                ft_putchar('-');
                n = n * (-1);
        }

        if (n >= a)
        {
                ft_putnbr_base(n / a, base);
        }
        ft_putchar(base[n % a]);
}

int main(void)
{
        char *reyan = "0123456789abcdef";
        ft_putnbr_base(26584, reyan);
        return(0);
}
