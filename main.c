#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "crypting.h"



 int main()
{
	int meniu = 0;

	printf("\nINSERT: \n1 to encrypt \n2 to decrypt \n>>>");

	scanf("%d",&meniu);

	switch(meniu){

		case 1:
			printf("\n");
			crip_cr();
			break;

		case 2:
			printf("\n");
			crip_de();
			break;

		default :
			printf("Incorect insertion please falow the instruction");
			main();
			break;
	}


	return 0;
}
