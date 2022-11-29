#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX_NAME       20


struct point {
	int 	x;
	int 	y;
};


int main(int argc, char *argv[]) {
	
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;
	
	printf("input p1 coordinate (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	//calculate xdiff
	xdiff = p2.x - p1.x;
	
	//calculate ydiff
	ydiff = p2.y - p1.y;

	//sqrt(xdiff^2 + ydiff^2) -> dist
	dist = sqrt(xdiff*xdiff + ydiff*ydiff);
	
	
	printf("distance : %lf", dist);
	
	
	return 0;
}

