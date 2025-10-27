

#include <stdio.h>
  
int main(void) {
    int a = 4, b = 7, c = 12;
    int *p = &a;
    int *q = &b;
    int *r = p;   // Now r is a simple pointer, not a pointer to pointer

    *p = *q + 3;      // (1)
    r = q;            // (2)
    *r = a + c;       // (3)
    q = &c;           // (4)
    *p = *q - 2;      // (5)
    *r = b - a;       // (6)
    r = &a;           // (7)
    *q = *r + b;      // (8)

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("*p = %d, *q = %d, *r = %d\n", *p, *q, *r);

    return 0;
}


// Step	Code Line	a	b	c	p points to	q points to	r points to	Notes / Explanation
// (1)	*p = *q + 3;	10	7	12	&a	&b	&a	deferenced p (a) is being changed to deferenced (b) + 3 (10). 
// (2)	r = q;	10	7	12	&a	&b	&b	Referenced r is now referenced q (address of b).
// (3)	*r = a + c;	10	22	12	&a	&b	&b	deferenced r is modified to a + c (22). 
// (4)	q = &c;	10	22	12	&a	&c	&b	Referenced q is now the address of c.
// (5)	*p = *q - 2;	10	22	12	&a	&c	&b	deferenced p is modifed to deferenced q (12) -2 but thats 10.
// (6)	*r = b - a;	10	12	12	&a	&c	&b	deferenced r is modified to b - a (22-10).
// (7)	r = &a;	10	12	12	&a	&c	&a 	referenced r(c) is now address of a.
// (8)	*q = *r + b;	10	12	22	&a

// &c, &a                 deferenced q is modified to deferenced r (a=10) + b(12) = 22. 