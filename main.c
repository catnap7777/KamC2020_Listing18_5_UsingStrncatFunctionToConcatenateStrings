//Listing 18.5Using strncat() function to concatenate strings; page 463

#include <stdio.h>
#include <string.h>


char str2[] = "abcdefghijklmnopqrstuvwxyz";

//** Builds and prints strings based on ascii characters for alphabet
//** Example output:
//            ab
//            abc
//            abcd
//            abcde
//            abcdef
//            abcdefg
//            abcdefgh
//            abcdefghi
//            abcdefghij
//            abcdefghijk
//            abcdefghijkl
//            abcdefghijklm
//            abcdefghijklmn
//            abcdefghijklmno
//            abcdefghijklmnop
//            abcdefghijklmnopq
//            abcdefghijklmnopqr
//            abcdefghijklmnopqrs
//            abcdefghijklmnopqrst
//            abcdefghijklmnopqrstu
//            abcdefghijklmnopqrstuv
//            abcdefghijklmnopqrstuvw
//            abcdefghijklmnopqrstuvwx
//            abcdefghijklmnopqrstuvwxy
//            abcdefghijklmnopqrstuvwxyz

int main(void)
{
    char str1[27];
    int n;

    for(n=1; n<27; n++)
    {
        strcpy(str1, "");
        strncat(str1, str2, n);
        puts(str1);
    }

    return 0;
}
