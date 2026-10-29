#include <stdio.h>

int count = 0;
void tower(int n, char source, char temp, char dest)
{
if (n == 0)
    return;
tower(n - 1, source, dest, temp);
count++;
printf("Move %2d: disk %d from %c to %c\n",count, n, source, dest);
tower(n - 1, temp, source, dest); 
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
