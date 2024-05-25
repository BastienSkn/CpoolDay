void print_char(char);

void my_print_n_ascii(int howMany)
{
    if (howMany < 94)
    {
        for (char valeur = 33 ; valeur < 33 + howMany ; valeur+=1)
        {
            print_char(valeur);
        }
    }
}