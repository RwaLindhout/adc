#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int **mkArray(int size) {
	int row, **arr;
	arr = malloc(size*sizeof(int *));
	for(row = 0; row < size; row++) {
		arr[row] = malloc(27*sizeof(int));
	}
	return arr;
}

void makeHistogram(int **arr, int n) { //Somehow this does still not work
	char c;
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
	makeHistogram(normalS, n);
	
	scanf("%d", &m);
	testS = mkArray(m);
	makeHistogram(testS, m);
	
	
	for(i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < 26; k++) {
				if(testS[i][k] != normalS[j][k]) {
					return 0;
				}
				else if(k == 25 && testS[i][k] == normalS[j][k] && j == n-1 && testS[i][26] == normalS[i][26]) {
					printf("%d\n", j+1);
				}
				else if(k == 25 && testS[i][k] == normalS[j][k] && j != n-1 && testS[i][26] == normalS[i][26]) {
					printf("%d ", j+1); 
				}
			}
		}
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
