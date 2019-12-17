#include<stdio.h>
void main(){
	int r, l, b;
	char ch;
	float area;
	printf("\n Enter C for circle or R for rectangle or S for Square\n");
	scanf("%c", &ch);
 
	if(ch=='C'){
	        printf("\n Enter radius of circle:");
	        scanf("%d", &r);
	        area= 3.14*r*r;
	        printf("\n Area of a circle is %f", area);
	}
 
	else if (ch =='R'){
	         printf("\n enter length of rectangle:");
 	         scanf("%d", &l);
	         printf("\n enter breadth of rectangle:");
	         scanf("%d", &b);
	         area= l*b;
	         printf("\n Area of a rectangle is %f", area);
	}
 
	else if (ch =='S'){
                        printf("\n enter side of square:");
	         scanf("%d", &l);
                        area= l*l;
 	        printf("\n Area of a rectangle is %f", area);
                  }
 
              else printf("\enter a valid option\n");
}
