#include <iostream>

FILE *ftp;

int main()
{
    ftp = fopen("test.dat", "w");
    fprintf(ftp, "%s", "tulip");
    fclose(ftp);
    return 0;
}
