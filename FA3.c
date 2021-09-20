#include<stdio.h>

main ()
{
	//MENU 1 - IF IF IF 
	float q,w,e,r;
	printf("MENU 1\n");
	printf("Choose a conversion\n");
	sleep(1);
	printf("[1] Mass (kg to g)\n");
	printf("[2] Length (ft to meters)\n");
	printf("[3] Volume (L to ml)\n");
	scanf("%f",&q);
		if (q == 1)
		{	printf("You chose Mass\n");
			printf("Enter kg: ");
			scanf("%f",&w);
			float t=w*1000;
			sleep(1);
			printf("You have converted %.2f kg to %.2f g\n", w,t);
			float store=t;	}
		if (q == 2)
		{	printf("You chose Length\n");
			printf("Enter feet: ");
			scanf("%f",&e);
			float y=e/3.281;
			sleep(1);
			printf("You have converted %.2f ft to %.2f m\n", e,y);
			float store=y;	}
		if (q == 3)
		{	printf("You chose Volume\n");
			printf("Enter Liters: ");
			scanf("%f",&r);
			float u=r*1000;
			sleep(1);
			printf("You have converted %.2f L to %.2f ml\n", r,u);
			float store=u;}
		if	(q != 1,2,3)
		{	printf("ERROR\n");
		} 
		sleep(1);
		
	// MENU 2 - IF ELSE IF	//note all characters should have an apostrophe
	char z; 
	float x,c,v;
	printf("MENU 2\n");
	printf("Choose a Conversion\n");
	printf("[a] Mass\n");
	printf("[b] Length\n");
	printf("[c] Volume\n");
	scanf("%c",&z);
		if (z == 'a')
		{
			printf("You chose Mass\n");
			printf("Enter g: ");
			scanf("%f",&x);
			float j=x/1000;
			sleep(1);
			printf("You have converted %.2f g to %.2f kg",x,j);
			float store2=j;}
		else if (z == 'b')
		{	printf("You chose Length\n");
			printf("Enter meters: ");
			scanf("%f",&c);
			float k=c*3.281;
			sleep(1);
			printf("You have converted %.2f m to %.2f ft",c,k);
			float store2=k;}		
		else if (z == 'c')
		{
			printf("You chose Volume\n");
			printf("Enter : ");
			scanf("%f",&v);
			float l=v/1000;
			sleep(1);
			printf("You have converted %.2f ml to %.2f L",v,l);
			float store2=l;
		}
		else if (z != 'a','b','c')
		{	printf("ERROR\n");}
		
	//VICE VERSA - INTERCHANGE
	/*float xx=store;
	float store=store2; 
	float store2=xx;
	printf("The First Conversion's result is: %.2f\n The Second Conversion's result is: %.2f ", store,store2);*/
		
}
