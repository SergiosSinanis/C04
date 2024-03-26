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

int     is_in_base(char c, char *base)
{
        int i;

        i = 0;

        while(base[i])
        {
                if(c == base[i])
                        return(i);
                i++;
        }
        return(-1);
}

int	ft_atoi_base(char *str, char *base)
{
        int  a;

        a = is_base_valid(base);

	if(a == 0)
        {
             return (0) ;
        }

	int i;

	i = 0;

	while(str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}

	int sign;

	sign = 1;

	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}

	int number;

        number = 0;

	int b;

        while(str[i])
        {
               	b = is_in_base(str[i], base);
		if(b < 0)
		{
			break;
		}
				
		number = number * a + b;;
               	i++;
       	}
	return(number * sign);
}
