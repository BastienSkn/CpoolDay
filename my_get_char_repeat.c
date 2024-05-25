int my_str_len(const char*);

int my_get_char_repeat(char to_find,const char* to_search)
{
    int x = 0;
    int len = my_str_len(to_search);
    for (int i = 0 ; i < len ; i+=1)
    {
        if(to_search[i] == to_find)
        {
            x += 1;
        }
    }
    return x;
}