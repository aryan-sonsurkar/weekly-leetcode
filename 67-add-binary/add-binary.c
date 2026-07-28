char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB) ? lenA : lenB;
    char *result = malloc(maxLen + 2);
    result[maxLen + 1] = '\0';
    int k = maxLen;
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    int sum,bit;
    while( i>=0 || j>=0 || carry!=0 )
    {
        sum = carry;

        if (i >= 0)
        {
            sum += a[i] - '0';
        }

        if (j >= 0)
        {
            sum += b[j] - '0';
        }
        carry = sum / 2;
        bit = sum % 2;
        result[k] = bit + '0';
        k--;
        
        if (i >= 0)
        {
            i--;
        }

        if (j >= 0)
        {
            j--;
        }
    }
    if (k == 0)
{
        for (int x = 0; x <= maxLen; x++)
        {
            result[x] = result[x + 1];
        }
    }
    return result;
}