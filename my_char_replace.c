void print_char(char);
int my_str_len(char*);

char *my_char_replace(char *origin, char toFind, char toReplace)
{
    int len = my_str_len(origin);
    for (int i = 0 ; i <= len ; i+=1)
    {
        if (origin[i] == toFind)
        {
            origin[i]=toReplace;
        }
    }
    return origin;
}