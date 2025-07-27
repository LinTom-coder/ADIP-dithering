#include "Header.h"

int main()
{
	printf("4: 2 anwser\n");
	char num;
	printf("Enter the question number to select output result:");
	scanf("%c", &num);
	switch (num)
	{
	case '4': hw2_2();
		break;
	default: printf("wrong number");
	}
}

