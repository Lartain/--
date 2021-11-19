#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
char password[20];


int chek() {
	char password2[30];
	char simbol;
	FILE* txt = fopen("password.txt", "r");
	fscanf(txt, "%s  ", &password2);
	for (int y = 0; y < strlen(password2); y++) {
		if (password[y] != password2[y]) {
			return 1;
		}
	}
	fclose(txt);
	return 2;
}


int main(void) {
	system("chcp 1251");
	system("cls");
	int y;
	printf("Password:");
	gets(password);
	int k = strlen(password);
	for (int y = 0; y < k; y++) {
		password[y] = password[y] ^ 10;
	}
	y = chek();
	if (y == 1) {
		printf("ERROR\n");
		return 1;
	}
	else {
		printf("Great!\n");
	}
	return 0;
}