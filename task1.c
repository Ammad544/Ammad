#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

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
	int fd1[2];
	int fd2[2];
	int fd3[2];
	int fd4[2];
	int fd5[2];
	int fd6[2];
	int fd7[2];
	int fd8[2];
	int fd9[2];
	int fd10[2];
	pipe(fd1);
	pipe(fd2);
	pipe(fd3);
	pipe(fd4);
	pipe(fd5);
	pipe(fd6);
	pipe(fd7);
	pipe(fd8);
	pipe(fd9);
	pipe(fd10);
	
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
			write(fd1[1],&sum1,sizeof(sum1));
			close(fd1[1]);
			exit(0);
			
		}
	else 
		{
			wait(NULL);
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
				write(fd2[1],&sum2,sizeof(sum2));
				close(fd2[1]);
				exit(0);
			}
			else 
			{
				wait(NULL);
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
					write(fd3[1],&sum3,sizeof(sum3));
					close(fd3[1]);
					exit(0);
				}
			else 
			{
				wait(NULL);
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
					write(fd4[1],&sum4,sizeof(sum4));
					close(fd4[1]);
					exit(0);
				}
				
			else 
			{
				wait(NULL);
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
					write(fd5[1],&sum5,sizeof(sum5));
					close(fd5[1]);
					exit(0);
				}
			else 
			{
				wait(NULL);
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
					write(fd6[1],&sum6,sizeof(sum6));
					close(fd6[1]);
					exit(0);
				}
			else 
			{
				wait(NULL);
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
					write(fd7[1],&sum7,sizeof(sum7));
					close(fd7[1]);
					exit(0);
				}
			else 
			{
				wait(NULL);
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
					write(fd8[1],&sum8,sizeof(sum8));
					close(fd8[1]);
					exit(0);
				}
			else 
			{
				wait(NULL);
				int cpid9 = fork();
				if (cpid9 == -1)
				{
					printf("failed");
					exit(0);
				}
				else if (cpid9 == 0)
				{
					for(int i8=800;i8<900;i8++)
					{
					sum9+=array[i8];
					}
					write(fd9[1],&sum9,sizeof(sum9));
					close(fd9[1]);
					exit(0);
				}
			else 
			{
				wait(NULL);
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
					write(fd10[1],&sum10,sizeof(sum10));
					close(fd10[1]);
					exit(0);
				}
			}
		       }
		      }
		     }
		    }
		   }
		  }
		 }
read(fd1[0],&sum1,sizeof(sum1));
read(fd2[0],&sum2,sizeof(sum2));
read(fd3[0],&sum3,sizeof(sum3));
read(fd4[0],&sum4,sizeof(sum4));
read(fd5[0],&sum5,sizeof(sum5));
read(fd6[0],&sum6,sizeof(sum6));
read(fd7[0],&sum7,sizeof(sum7));
read(fd8[0],&sum8,sizeof(sum8));
read(fd9[0],&sum9,sizeof(sum9));
read(fd10[0],&sum10,sizeof(sum10));
int SUM = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 + sum9 + sum10;
printf("SUM OF FIRST 1000 NUMBERS:%d" , SUM);
	return 0;



	}				
}
