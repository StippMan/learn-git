#include <stdio.h>
#include "arithmetic.h"


int main() {
	printf("Testes: \n");
    printf("\t4 + 2 = %d\n", sum(4, 2));
    printf("\t4 - 2 = %d\n", sub(4, 2));
    printf("\t4 x 2 = %d\n", mul(4, 2));
    printf("\t4 / 2 = %d\n", div(4, 2));

    return 0;
}
