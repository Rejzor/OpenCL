// This program implements a array addition using OpenCL

// System includes
#include <stdio.h>
#include <stdlib.h>
#include<cstdio>
#include <time.h>
// OpenCL includes

#define DATA_SIZE 16384
using namespace std;




int main(void)
{

	clock_t start, koniec;

	start = clock(); // bie¿¹cy czas systemowy w ms
	float inputDataA[DATA_SIZE] = { 0 };
	float inputDataB[DATA_SIZE] = { 0 };
	float  results[DATA_SIZE] = { 0 };
	//Add random values to an arrays
	for (long i = 0; i < DATA_SIZE; ++i)
	{
		inputDataA[i] = rand() % 10;
		printf("ARRAY A [%d]: %f \n", i, inputDataA[i]);
	}
	printf("\n");
	for (long i = 0; i < DATA_SIZE; ++i)
	{
		inputDataB[i] = rand() % 10;
		printf("ARRAY B [%d]: %f \n", i, inputDataB[i]);
	}
	printf("Output: \n");
	for (long i = 0; i < DATA_SIZE; ++i)
	{
		results[i] = inputDataB[i] + inputDataA[i];
		printf("[%d]: %f \n", i, results[i]);
	}
	koniec = clock(); // bie¿¹cy czas systemowy w ms
	long delta = (long)(koniec - start);//czas dzia³añ w ms
	printf("Czas wykonania programu: %lu ms", delta);
	
	getchar();
	return 0;

}