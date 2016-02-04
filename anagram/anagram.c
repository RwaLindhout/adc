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
#include <assert.h>

void checkLength(int size) {
	char *arr;
	int counter = 0, j=0;
	arr = malloc(100*sizeof(char));
	for(int i = 0; i < size; i++) {
		while(arr[j] != '.') {
		arr[j] = getchar();
		counter++;
		j++;
		printf("%d",counter);
	}
	}


printf("%d\n", counter);
}

int main(int argc, char **argv)
{
	int n, m;
	scanf("%d", &n);
	checkLength(n);
	scanf("%d", &m);
	checkLength(m);
	
	//findAnagram();
	
	return 0;
}

