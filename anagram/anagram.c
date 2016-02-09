/*
 * anagram.c
 * 
 * Copyright 2016 Younes <younes@younes-PNB-series>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


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

void **makeHistogram(int **arr) { //Somehow this does still not work
	char c;
	int i = 0;
	c = ' ';
	while(c != '.') {
		c = getchar();
		if(c >= 'a' && c <= 'z') {
			arr[i][c - 'a']++;
			arr[i][27]++;
			i++;
		}
	}
	c = getchar();
}


int main(int argc, char **argv)
{
	int n, m, i;
	int **testS;
	int **normalS;
	scanf("%d", &n);
	normalS = mkArray(n);
	for(i = 0 ; i < n; i++) {
		makeHistogram(normalS);
	}
	scanf("%d", &m);
	testS = mkArray(m);
	for(int j = 0; j < m; j++) {
		makeHistogram(testS);
	}
	
	for(int i = 0; i < n; m++) {
		printf("%d\n", normalS[i][26]);
		}
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; i++) {
			for(int k = 0; k < 26; k++) {
				if(testS[i][k] != normalS[j][k]) {
					break;
				}
				else if(testS[i][k] == normalS[j][k] && j == n-1 && testS[i][27] == normalS[i][27]) {
					printf("%d\n", j+1);
				}
				else if(testS[i][k] == normalS[j][k] && j != n-1 && testS[i][27] == normalS[i][27]) {
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

