int nbrdigits(int c)
{
    int digits;

    digits = 0;
    if (c == 0)
        return (1);
    while(c >= 1)
    {
        c /= 10;
        digits++;
    }
    return (digits);
}

char	*ft_itoa(int c)
{
    char	*out;
    size_t digits;
    size_t dgt;

    digits = nbrdigits(c);
    out = malloc(digits * sizeof(char));
    dgt = c;
    while (digits > 0)
    {
        out[digits] = c % 10;
        c /= 10;
        digits --;
    }
    return (out);
}