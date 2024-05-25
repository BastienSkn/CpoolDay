void print_char(char);
int my_str_len(const char*);

void my_print_revert(char *toRevert)
{
    int len = my_str_len(toRevert);
    for (int valeur = len ; valeur >= 0 ; valeur-=1)
    {
        print_char(toRevert[valeur]);
    }
}