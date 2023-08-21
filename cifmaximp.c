#include <stdio.h>

int main()
{
    unsigned short n, i = 0, cif_max_imp = 0;
    char c, cif_max = '0', ok;

    scanf("%hu", &n);

    while (i < n) {
        scanf("%c", &c);
        ok = 0;
        while (c >= '0' && c <= '9') {
            ok = 1;

            if (cif_max < c) cif_max = c;

            scanf("%c", &c);
        }

        if (ok) {
            if ((cif_max - '0') % 2) cif_max_imp++;

            i++;

            cif_max = '0';
        }
    }

    printf("%hu", cif_max_imp); 

    return 0;
}
