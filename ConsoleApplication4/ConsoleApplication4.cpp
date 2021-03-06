#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int mas[10000][10000];

void zapmas(void)
{
	int s, i, k;
	for (i = 0; i < 10000; i++)
		for (s = 0; s < 10000; s++)
			mas[i][s] = rand() % 100;
}

void rotzap(void)
{
	int s, i, k;
	for (s = 0; s < 10000; s++)
		for (i = 0; i < 10000; i++)
			mas[i][s] = rand() % 100; ;
}

void pzap(void)
{
	int s, i, k, *p;
	p = &mas[0][0];
	for (i = 0; i < 10000; i++)
		for (s = 0; s < 10000; s++)
			*p++ = rand() % 100; ;
}

int main()
{
	clock_t start, end;
	double seconds;
	printf("Start..."), fflush(stdout);
	start = clock();
	zapmas();
	end = clock();
	printf("Finish\n");
	seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("zap time: %f seconds\n", seconds);

	printf("Start..."), fflush(stdout);
	start = clock();
	zapmas();
	end = clock();
	printf("Finish\n");
	seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("zap time again: %f seconds\n", seconds);

	printf("Start..."), fflush(stdout);
	start = clock();
	rotzap();
	end = clock();
	printf("Finish\n");
	seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("rotzap time: %f seconds\n", seconds);

	printf("Start..."), fflush(stdout);
	start = clock();
	rotzap();
	end = clock();
	printf("Finish\n");
	seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("rotzap time again: %f seconds\n", seconds);

	printf("Start..."), fflush(stdout);
	start = clock();
	pzap();
	end = clock();
	printf("Finish\n");
	seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("pzap time: %f seconds\n", seconds);

	printf("Start..."), fflush(stdout);
	start = clock();
	pzap();
	end = clock();
	printf("Finish\n");
	seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("pzap time again: %f seconds\n", seconds);

	getchar();
}