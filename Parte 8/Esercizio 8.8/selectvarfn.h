#define N 5

int count(char v[])
{
    char *p = v;
    int count = 0;
    for(int i = 0 ; i < N ; i++)
    {
        if(*p++ >= '0' && *p++ <= '9')
            count++;
    }
    return count;
}