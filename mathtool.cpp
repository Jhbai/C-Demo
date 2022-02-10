# include <iostream>
# include <fstream>
# include <string>
# include <vector>

double **multiply(double **A, double **B, int ra, int ca, int rb, int cb){
	// create the result matrix(ra * cb)
	if(ca != rb){
		std::cout << "The form is not accepted." << std::endl;
		return A;
	}
	double** result = (double **)malloc(ra*sizeof(double *));
	for(int idx = 0; idx < ra; idx ++)result[idx] = (double *)malloc(cb*sizeof(double));
	
	// compute
	for(int j = 0; j < cb; j++){
		for(int k = 0; k < ra; k++){
			result[k][j] = 0.0;
			for(int i = 0; i < ca; i++)result[k][j] += A[k][i]*B[i][j];
		}
	}
	return result;
}
