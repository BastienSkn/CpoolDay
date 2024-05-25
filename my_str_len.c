int my_str_len(const char* chaine)
{
    int len = 0;
    int x = 0;
    while (x < 1)
    {
        char a = '\0';
        if (chaine[len] == a)
        {
            x = 1;
        }
        else
        {
            len += 1;
        }
    }
    return len;
}