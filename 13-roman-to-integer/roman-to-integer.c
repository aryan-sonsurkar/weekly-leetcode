int value(char c)
{
    int num;
    switch(c)
    {
        case 'I': num = 1;break;
        case 'V': num = 5;break;
        case 'X': num = 10;break;
        case 'L': num = 50;break;
        case 'C': num = 100;break;
        case 'D': num = 500;break;
        case 'M': num = 1000;break;
        default: return 0;
    }
    return num;
}
int romanToInt(char* s) {
    int num;
    int total = 0;
    for(int i=0;s[i] !='\0';i++)
    {
    num = value(s[i]);
    int next = value(s[i+1]);
    if(num<next)
    {
        total -= num;
    }
    else
    {
        total+= num;
    }
    }
    return total;
}