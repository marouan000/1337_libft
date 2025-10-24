int ft_atoi(const char *str)
{
    int i;
    long res;
    int sign;

    sign = 1;
    res = 0;
    i = 0;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] < 48 || str[i] > 57)
            break;
        res = (res * 10) + (str[i] - 48);
        i++;
    }
    // if(res > 9223372036854775807 && sign == 1)
    //     return (-1);
    // if((-1) * res < -9223372036854775808 && sign == -1)
    //     return (0);
    return (int)(res * sign);
}