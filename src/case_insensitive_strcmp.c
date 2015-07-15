int case_insensitive_strcmp(const void* a1, const void* b1)
{
    char* a = (char*)a1;
    char* b = (char*)b1;
    char a_letter, b_letter;

    for(int i = 0; ((a[i] != '\0') && (b[i] != '\0')); i++)
    {
        a_letter = a[i];
        b_letter = b[i];

        if((a_letter >= 'A') && (a_letter <= 'Z'))
        {
            a_letter += 32;
        }
        if((b_letter >= 'A') && (b_letter <= 'Z'))
        {
            b_letter += 32;
        }

        if(a_letter > b_letter)
        {
            return 1;
        }
        if(a_letter < b_letter)
        {
            return -1;
        }
    }

    if(a[i] == '\0')
    {
        if(b[i] == '\0')
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return 1;
    }
}