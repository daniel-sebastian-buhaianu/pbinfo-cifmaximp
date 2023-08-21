#include <stdio.h>

int main()
{
	unsigned short n, i, cif_max, cif, cifmaximp = 0;
	int nr;

	scanf("%hu", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &nr);
        
		cif_max = 0;
		while (nr > 0) {
			cif = nr % 10;
            
			if (cif > cif_max) cif_max = cif;
            
			nr /= 10;
		}
        
		if (cif_max % 2) cifmaximp++;
	}

	printf("%hu", cifmaximp);

	return 0;
}
