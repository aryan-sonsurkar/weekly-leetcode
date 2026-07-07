char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";
    char *prefix = (char *)malloc(201 * sizeof(char));
    int i;
    for (i = 0; strs[0][i] != '\0'; i++)
    {
        char currentchar = strs[0][i];
        for (int j = 0; j < strsSize; j++)
        {
            if (currentchar != strs[j][i])
            {
                prefix[i] = '\0';
                return prefix;
            }
        }
        prefix[i] = currentchar;
    }
    prefix[i] = '\0';
    return prefix;
}