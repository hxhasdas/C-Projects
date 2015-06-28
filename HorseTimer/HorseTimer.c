#include <stdio.h>
#include "HorseTimer.h"

double calcSpeed(int distance, int blocks, double repeaterDelay){
	double divisor = (double)(blocks)/5 + repeaterDelay;
	return distance/divisor;	
}

int main(int argc, char *argv[]){
	int distance = 43;
	int blocks;
	double repeaterDelay = 0.2;
	double speed = 0;
	printf("Number of blocks in hopper: ");
	scanf("%d", &blocks);
	speed = calcSpeed(distance, blocks, repeaterDelay);
	printf("Speed in blocks/second: %f\n", speed);
	return speed;
}
