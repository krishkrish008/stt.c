#include<stdio.h>
 void main()
 {
 int a, b, c, d, e, f, g, h, i, j, p, q, w, x, y, z, lar;
 clrscr();
  printf(" \nEnter Ten numbers  ") ;
  scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j) ;
   x = (a > b? a : b);
   y = (c > d? c : d);
   z = (e > f? e : f);
   p = (g > h? g : h);
   q = (i > j? i : j);
   w = x > y ? ( x > z ? x : z) : (y > z ? y : z) ;
   lar= p > q ? ( p > w ? p : w) : (q > w ? q : w) ;
  printf("\n\n The largest of Ten numbers will be %d", lar) ;
 getch();
   }
