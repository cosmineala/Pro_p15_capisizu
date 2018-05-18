#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "crypting.h"
#include "function.h"

    void men(){

        int meniu = 0;

   		printf("\nINSERT: \n1 to encrypt \n2 to decrypt \n0 to exit \n>>>");

    	scanf("%d",&meniu);

    	switch(meniu){

        	case 0:
            return ;


        	case 1:
            	printf("\n");
            	crypt();
            	break;

        	case 2:
            	printf("\n");
            	decrypt();
            	break;

        	default :
            	printf("Incorect insertion please falow the instruction");
            	men();
            	break;
    	}


    	return ;

	}

	char *scan(){
    
        char *st_citire;
        char c = 'a';
        int j = 0;
    
        st_citire = (char*)malloc(sizeof(char));


                                                                            char bug;//rezolvare bug

                                                                            bug = getc(stdin);

    
        printf("Enter String : ");
 
        while (c != '\n') {
        
            c = getc(stdin);
        
        
            st_citire = (char*)realloc(st_citire, (j + 1) * sizeof(char));
        
        
            st_citire[j] = c;
        
        
            j++;
        }
    
        st_citire[ j ] = '\0';
        
        return st_citire;
    }