#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char input[10][60];
char operator[10][1];
char Var[10][60];
int main()
{
	int len;
	printf("Start....\n");
	while(1)
	{
		if(!strcmp(input[0],"clear"))//clear 구현
			system("clear");
		if(!strcmp(input[0], "end"))//end 구현
			return 0;
		printf("(input) ");
		for(int n=0;;n++)
		{
			int num = 0;
			scanf("%c", &input[num][n]);
			if(input[num][n]=='+', '-', '*', '/')
			{
				operator[num][0]=input[num][n];
				num++;
			}
			if(input[num][n]=='\n')
			{
				input[num][n]='\0';
				printf("개행\n");
				break;
			}
		if((input[num][n]!='+', '-', '*', '/', '\n')	|| !(input[num][n]<=57 && input[num][n]>=48))
			{
				printf("error\n");
				break;
			}
		}   
//제대로 입력됫나 테스트
for(int n=0;;n++)
{
int num=0;
printf("%c", input[num][n]);
if(input[num][n]='\0')
	break;
}

// 테스트
	}
	return 0;

}
