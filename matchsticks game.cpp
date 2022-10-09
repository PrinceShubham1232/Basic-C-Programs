#include<stdio.h>
int main()
{
	int match_sticks=21,user_choice,computer_choice;
	while(match_sticks>=1)
	{
		printf("total match sticks=%d\n",match_sticks);
		printf("pick up the match sticks between (1 t0 4) =");
		scanf("%d",&user_choice);
		if(user_choice>4)
		{
		printf("invalid entry");
		break;
	}
	computer_choice=5-user_choice;
	printf("computer picks up the %d match sticks \n",computer_choice);
	match_sticks=match_sticks-user_choice-computer_choice;
	if(match_sticks==1)
	{
		printf("\n you have been lost via computer");
		break;
	}
	}
	return 0;
}
