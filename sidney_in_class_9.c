
#include <stdio.h>

int main(void) {
    int a = 4, b = 7, c = 12;
    int *p = &a;
    int *q = &b;
    int **r = &p;

    *p = *q + 3;        // (1)
    *r = q;             // (2)
    **r = a + c;        // (3)
    q = &c;             // (4)
    *p = *q - 2;        // (5)
    **r = b - a;        // (6)
    *r = &a;            // (7)
    *q = **r + b;       // (8)

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("*p = %d, *q = %d, **r = %d\n", *p, *q, **r);

    return 0;
}
// Step	Code Line	a	b	c	p points to	q points to	r points to	Notes / Explanation
// (1)	*p = *q + 3; 10  7  12   q + 3    address of b    address of c							
// (2)	*r = q;  10 7 address of b a b c							
// (3)	**r = a + c; 10 22 12 q + 3 address of b a + c							
// (4)	q = &c;	10 						
// (5)	*p = *q - 2;							
// (6)	**r = b - a;							
// (7)	*r = &a;							
// (8)	*q = **r + b;		