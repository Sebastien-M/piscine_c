unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int destlen;
    unsigned int srclen;
    unsigned int resultlen;

    destlen = 0;
    srclen = 0;
    resultlen = 0;
    while (dest[destlen] != '\0')
    {
        destlen++;
    }
    while (src[srclen] != '\0' && srclen < size)
    {
        dest[destlen + srclen] = src[srclen];
        srclen++;
    }
    dest[destlen + srclen] = '\0';
    while (src[resultlen] != '\0')
    {
        resultlen++;
    }
    return (resultlen + size);
}