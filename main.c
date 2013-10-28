#include <stdio.h>

int main() {
    int i, j,k, n;
    int **a, **b, **c;
    
    int sum = 0;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }    
    }    
	
	FILE * file_out;
	
	char write_file[50] = "out.txt";
    	
	file_out = fopen(write_file,"wt");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fprintf(file_out,"%i ",c[i][j]);
		}
		fprintf(file_out,"\n");
	}
	
	fclose(file_out);
	
	getch();
	
	return 0;	
}
