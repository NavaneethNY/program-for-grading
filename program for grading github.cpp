//PROGRAM FOR GRADING. 
#include <stdio.h>
int main()
{
    int marks;
    printf("enter the student's marks scored\n");
    scanf("%d",&marks);
    if((marks>=85) and (marks<=100))
    	printf("GRADE SCORED IS GRADE 'A'.");
    
    else if((marks>=70) and (marks<=84))
    	printf("GRADE SCORED IS GRADE 'B'.");
	
    else if((marks>=55) and (marks<=69))
        printf("GRADE SCORED IS GRADE 'C'.");
	
	else if((marks>=40) and (marks<=54))
	    printf("GRADE SCORED IS GRADE 'D'.");
	
	else
		printf("GRADE SCORED IS GRADE 'F'.");
		printf("PROGRAM COMPLETED WITH THE OUTPUT\n");
}
