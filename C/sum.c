#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numi1, numi2;
float numf1, numf2;
scanf("%d %d", &numi1, &numi2);
scanf("%f %f", &numf1, &numf2);
printf("%d %d\n", numi1 + numi2, numi1 - numi2);
printf("%.1f %.1f\n", numf1 + numf2, numf1 - numf2);
return (0);
}
