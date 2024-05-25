void print_char(char);

void my_print_ascii(void)
{
    for (char valeur = 36 ; valeur < 127 ; valeur+=1)
    {
        print_char(valeur);
    }
}