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

int makeHistogram(int *array) {
	
	}


int main(int argc, char **argv)
{
	int n, m, counter[100];
	scanf("%d", &n);
	for(int i = 0 ; i < n; i++) {
		counter[i] = checkLength();
		printf("%d\n", counter[i]);
	}
	scanf("%d", &m);
	for(int j = 0; j < m; j++) {
		checkLength();
	}
	
	//findAnagram();
	
	return 0;
}

