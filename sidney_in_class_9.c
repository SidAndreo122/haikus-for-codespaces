

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
// (1)	*p = *q + 3; 10  7  12   &a    &b    &a         dereference, and add 							
// (2)	*r = q;  10 7 &b &a &b &b							
// (3)	*r = a + c; 10 7 &a + &c &a &b &a + &c							
// (4)	q = &c;	10 7 &a + &c &a &c &a + &c					
// (5)	*p = *q - 2; 1- 5 &a + &c &a &c &a + &c							
// (6)	*r = b - a; 							
// (7)	*r = &a;							
// (8)	*q = **r + b;		