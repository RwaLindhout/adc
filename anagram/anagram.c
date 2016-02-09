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

int checkLength() { 
	char *arr;
	int counter = 0, i=0, space = 0;
	arr = malloc(100*sizeof(char));
		for(i=0; (arr[i] = getchar())!='.'; i++) {
			
			if(arr[i] == ' ') {
				space++;
			}
		}
	return counter = i - space - 1;
}

void **makeHistogram(int **arr) {
	char c;
	int i = 0;
	c = ' ';
	while(c != '.') {
		c = getchar();
		if(c >= 'a' && c <= 'z') {
			arr[i][c-'a']++;
			arr[i][26]++;
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
				else if(testS[i][k] == normalS[j][k]) {
					
				}
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		//printf("%d\n", counter[i]);
	}
	for(int i = 0; i < n; i++) {
		
	}
	return 0;
}

