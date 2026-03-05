int wordsCounter(char coonst *s, char c)
{
    int word_count;
    int i;

    word_count = 0;
    i = 0;
    while (s[i])
    {
        if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            word_count++;
        i++;
    }
    return (word_count);
}



char	**ft_split(char const *s, char c)
{
    char **result;
    int i;
    int strlen;
    int word_index;

    word_index = wordsCounter(s, c);
    result = malloc(wordsCounter(s, c) + 1);
    result[word_index] = NULL;

    strlen = 0;
    i = 0;
    while (result[i])
    {
        while (s[strlen] )
    }


}