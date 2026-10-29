Pgm: Write a C program to solve the Tower of Hanoi problem using recursion.
/* Tower of Hanoi using recursion */
#include <stdio.h>
int count = 0; /* total number of moves */
/* Move n disks from source to dest using temp */
void tower(int n, char source, char temp, char dest)
{
if (n == 0) /* base case: nothing to move */
return;
tower(n - 1, source, dest, temp); /* n-1 disks to temp */
count++;
printf("Move %2d: disk %d from %c to %c\n",
count, n, source, dest);
tower(n - 1, temp, source, dest); /* n-1 disks to dest */
}
int main(void)
{
int n;
printf("Enter the number of disks: ");
scanf("%d", &n);
printf("Sequence of moves (A to C using B):\n");
tower(n, 'A', 'B', 'C');
printf("Total number of moves = %d\n", count);
return 0;
}