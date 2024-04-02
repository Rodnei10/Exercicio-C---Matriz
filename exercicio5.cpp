//Exercício 5

#include "stdio.h"

int main() 
{
int rlf_lado, rlf_x,rlf_i, rlf_j;

printf("defina o lado da matriz:\n");
scanf("%d", &rlf_lado);
int mat[rlf_lado][rlf_lado];
for(int rlf_i=0; rlf_i<rlf_lado; rlf_i++)
          {
		    for(int rlf_j=0; rlf_j<rlf_lado; rlf_j++) 
          {
			mat[rlf_i][rlf_j] = 0;
			if(rlf_i==rlf_j) 
                {
				mat[rlf_i][rlf_j] = 1;
		       	}
			printf("%d\t", mat[rlf_i][rlf_j]);
		}
		printf("\n");
	}
	printf("defina um novo valor para 1:\n");
	scanf("%d", &rlf_x);
	      for(int rlf_i=0; rlf_i<rlf_lado; rlf_i++) 
             {
		     for(int rlf_j=0; rlf_j<rlf_lado; rlf_j++) 
             {
			mat[rlf_i][rlf_j] = 0;
			if(rlf_i==rlf_j) 
               {
				mat[rlf_i][rlf_j] = rlf_x;
	           }
			printf("%d \t", mat[rlf_i][rlf_j]);
	}
	printf("\n");
	}
return 0;
}
