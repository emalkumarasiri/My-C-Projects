#include <stdio.h>
int main()
{ 
	int marks[5];
    int sum = 0;
    int max;
    int min;
 	float avg;
	for (int i=0;i<5;i++){
		printf("Enter mark:\n");
		scanf("%d",&marks[i]);
		sum=sum+marks[i];	
	}
	max=marks[0];
	min=marks[0];
	for (int i=0;i<5;i++){
		if (marks[i]>max)
		{
			max=marks[i];
		}
		if (marks[i]<min)
		{
			min=marks[i];
		}
	}

    avg = (float)sum / 5;
	printf("===== RESULT =====\n"
);
	printf("Total      :%d\n",sum);
	printf("Average    :%f\n",avg);
	printf("Highest    :%d\n",max);
	printf("Lowest     :%d\n",min);
	return 0; 
}
