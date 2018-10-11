#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int array[1000];
	int sum1=0;
	int sum2=0;
	int sum3=0;
	int sum4=0;
	int sum5=0;
	int sum6=0;
	int sum7=0;
	int sum8=0;
	int sum9=0;
	int sum10=0;
	for (int i = 0; i<1000;i++)
	{
		array[i] = i;
	}
	int cpid1 = fork();
	if (cpid1 ==  -1)
	{
		printf("failed");
		exit(0);
	}
	else if (cpid1 == 0)
		{
			for(int i=0;i<100;i++)
			{
				sum1+=array[i];
			}
			
		}
	else 
		{
			int cpid2 = fork();
			if (cpid2 == -1)
			{
				printf("failed");
				exit(0);
			}
			else if (cpid2 == 0)
			{
				for(int i1=100;i1<200;i1++)
				{
				sum2+=array[i1];
				}
			}
			else 
			{
				int cpid3 = fork();
				if (cpid3 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid3 == 0)
				{
					for(int i2=200;i2<300;i2++)
					{
					sum3+=array[i2];
					}
				}
			else 
			{
				int cpid4 = fork();
				if (cpid4 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid4 == 0)
				{
					for(int i3=300;i3<400;i3++)
					{
					sum4+=array[i3];
					}
				}
				
			else 
			{
				int cpid5 = fork();
				if (cpid5 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid5 == 0)
				{
					for(int i4=400;i4<500;i4++)
					{
					sum5+=array[i4];
					}
				}
			else 
			{
				int cpid6 = fork();
				if (cpid6 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid6 == 0)
				{
					for(int i5=500;i5<600;i5++)
					{
					sum6+=array[i5];
					}
				}
			else 
			{
				int cpid7 = fork();
				if (cpid7 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid7 == 0)
				{
					for(int i6=600;i6<700;i6++)
					{
					sum7+=array[i6];
					}
				}
			else 
			{
				int cpid8 = fork();
				if (cpid8 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid8 == 0)
				{
					for(int i7=700;i7<800;i7++)
					{
					sum8+=array[i7];
					}
				}
			else 
			{
				int cpid9 = fork();
				if (cpid9 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid9 == 0)
				{
					for(int i8=800;i8<00;i8++)
					{
					sum9+=array[i8];
					}
				}
			else 
			{
				int cpid10 = fork();
				if (cpid10 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid10 == 0)
				{
					for(int i9=900;i9<1000;i9++)
					{
					sum10+=array[i9];
					}
				}
			}
		       }
		      }
		     }
		    }
		   }
		  }
		 }
printf("%d",sum1);
printf("%d",sum2);
	return 0;



}				
				

































}
