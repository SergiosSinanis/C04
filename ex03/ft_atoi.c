int	ft_atoi(char *str)
{
	int i;

	i = 0;


	while(str[i] >= '9' && <= '13')
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

	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}

	return(number * sign);
}
