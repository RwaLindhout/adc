#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

int **mkArray(int size) { //How to make a 2D array with rows and shit
	int row, **arr;
	arr = malloc(size*sizeof(int *));
	assert(arr != NULL);
	for(row = 0; row < size; row++) {
		arr[row] = malloc(27*sizeof(int));
		assert(arr[row] != NULL);
	}
	return arr;
}

void makeHistogram(int **arr, int n) { //This is supposed to make a histogram by taking the ASCII value of the input letter minus a to calculate the value of the input letter
	char c;								// Then we increase the value of the input letter in the array, to count the frequency of the letter
	int i = 0;
	c = ' ';
	while(i != n) {
		c = getchar();
		if(c >= 'a' && c <= 'z') {
			arr[i][c - 'a']++;
			arr[i][26]++;
		}
		if(c == '.'){
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	int n, m, i;
	int **testS;
	int **normalS;
	scanf("%d", &n);
	normalS = mkArray(n);
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 26; j++) {
			normalS[i][j] = 0;
		}
	}
	
	makeHistogram(normalS, n);
	
	scanf("%d", &m);
	testS = mkArray(m);
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < 26; j++) {
			testS[i][j] = 0;
		}
	}
	
	makeHistogram(testS, m);
	
	
	for(i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(testS[i][26] == normalS[j][26])
			for(int k = 0; k < 27; k++) {
				if(testS[i][k] != normalS[j][k]) {
					break;
				}
				else if(k == 25 && testS[i][k] == normalS[j][k]) {
					printf("%d ", j+1);
				}
				 
			}
		}
		printf("\n");
	}
	
	for(int i = 0; i < n; i++) {
		free(normalS[i]);
	}
	free(normalS);
	
	for(int i = 0; i < m; i++) {
		free(testS[i]);
	}
	free(testS);
	
	return 0;
}
