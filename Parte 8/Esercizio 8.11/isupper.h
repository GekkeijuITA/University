#define R 2
#define C 5

bool isUpper(char mat[][C])
{
    char *p = mat[0];
    for(int i = 0 ; i < R*C ; i++)
    {
        if(*p++ < 'A' || *p++ > 'Z')
        {
            return false;
        } 
    }
    return true;
}