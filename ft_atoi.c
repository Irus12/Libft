int atoi(const char *nptr) 
{
    char    *str;
    size_t  i;
    int sgn;
    int out;

    str = (char *) nptr;
    i = 0;
    sgn = 1;
    out = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sgn = -1;
        i++;
    }
    while (49 <= str[i] && str[i] <= 57)
    {
        out = out*10 + str[i] - 48;
    } 
    return (sgn * out);
}