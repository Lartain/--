#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
char mass[250];
int count = 1;
char mass2[100];
char mass3[250], mass4[250], mass5[250];
char iint[4] = "int", cchar[5] = "char", vvoid[5] = "void", ffloat[7] = "float", ddouble[8] = "double", llong[5] = "long";
char massint[50] = { '0' };
char masschar[50] = { '0' };
char massfile[50] = { '0' };
char massvoid[50] = { '0' };
char mass6[250];

char switchforfunc() {
	int chislo;
	chislo = rand() % 6;
	switch (chislo)
	{
	case 1:
		strcpy(mass4, iint);
		break;
	case 2:
		strcpy(mass4, cchar);
		break;
	case 3:
		strcpy(mass4, ffloat);
		break;
	case 4:
		strcpy(mass4, llong);
		break;
	case 5:
		strcpy(mass4, ddouble);
		break;
	case 6:
		strcpy(mass4, vvoid);
		break;
	default:
		break;
	}
	chislo = rand() % 4;
	char l1[250] = "{for(int i=0;i<1000;i++){int p=0;p++;}return;}";
	char l2[250] = "{int l=0;for(int i=0;i<584;i++){int p=i;l++;}return l;}";
	char l3[250] = "{float ghbrjkltc=25;int a,h,p,c,d,s;a=rand()%25;if(ghbrjkltc==a){a++;p=15874;s=15472;}return s;}";
	char l4[250] = "{int d=105;do{d--;}while(d!=0);return d; }";
	switch (chislo)
	{
	case 1:
		strcpy(mass5, l1);
		break;
	case 2:
		strcpy(mass5, l2);
		break;
	case 3:
		strcpy(mass5, l3);
		break;
	case 4:
		strcpy(mass5, l4);
		break;
	default:
		break;
	}
	return;
}
char switchforfunc2() {
	int chislo;
	char aaa[250] = "int Intret=45871;char maaas[587];long long kill=15488521;";
	char aaa2[250] = "long int lala=7854;float hfjnd=0.5;FILE* txttt;";
	char aaa3[250] = "char key;int finish=15874;char gef[58];";
	chislo = rand() % 3;
	switch (chislo)
	{
	case 1:
		strcpy(mass4, aaa);
		break;
	case 2:
		strcpy(mass4, aaa2);
		break;
	case 3:
		strcpy(mass4, aaa3);
		break;
	default:
		break;
	}
	return;
}

char switchforfunc3() {
	int chislo;
	char aaa[250] = " int Intret=45871;char maaas[587];long long kill=15488521;";
	char aaa2[250] = " long int lala=7854;float hfjnd=0.5;FILE* txttt;";
	char aaa3[250] = " char key;int finish=15874;char gef[58];";
	chislo = rand() % 3;
	switch (chislo)
	{
	case 1:
		strcpy(mass4, aaa);
		break;
	case 2:
		strcpy(mass4, aaa2);
		break;
	case 3:
		strcpy(mass4, aaa3);
		break;
	default:
		break;
	}
	return;
}
void randomword() {
	char mass[50];
	int y, l;
	char simbol;
	y = rand() % 45 + 5;

	for (int i = 0; i <= y; i++) {
		if (i == y) {
			mass[i] = '\0';
			break;
		}
		simbol = rand() % 26 + 97;
		mass[i] = simbol;
	}
	strcpy(mass3, mass);
}
void comment(char mass2[50], char mass[50]) {
	int  i = 0, j = 0, l = 0, h, r = 0, k = 0, p, v = 0;
	char text[200][100] = { '0' };
	char sign, sign2, sign3 = { '1' }, sign4 = { '1' };


	FILE* file2 = fopen(mass2, "w");
	FILE* file1 = fopen(mass, "r");

	if (file1 == NULL) {
		printf("Fail contains no information\n");
		return 0;
	}
	while (!feof(file1))
	{
		sign = fgetc(file1);
		if (sign == '�') {
			break;
		}

		else if (sign == '"') {
			do {
				do {
					fprintf(file2, "%c", sign);
					sign = fgetc(file1);
				} while ((!feof(file1)) && (sign != '"') && (sign != '\n') && (sign != '\\'));

				if (sign == '"') { v = 1; }
				else if (feof(file1)) { v = 1; }
				else if (sign == '\n') { v = 1; }
				else if (sign == '\\') {
					fprintf(file2, "%c", sign);
					sign = fgetc(file1);

					if (sign == '\n') { v = 0; }
					else v = 0;
				}
			} while (v == 0);
			fprintf(file2, "%c", sign);

		}




		else if (sign == '\'') {
			do {
				fprintf(file2, "%c", sign);
				sign = fgetc(file1);
			} while ((!feof(file1)) && (sign != '\'') && (sign != '\n'));
			fprintf(file2, "%c", sign);
		}

		else
			if (sign == '/') {
				sign4 = sign;
				sign = fgetc(file1);
				if (sign == '/')
				{
					do
					{
						sign = fgetc(file1);
						if (sign == '\\') {
							sign = fgetc(file1);
							if (sign == '\n') {
								do {
									do {
										sign = fgetc(file1);
									} while ((!feof(file1)) && (sign != '\n') && (sign != '\\'));
									if (sign == '\n') { k = 1; }
									if ((!feof(file1))) { k = 1; }
									if (sign == '\\') {
										sign = fgetc(file1);
										if (sign == '\n') {
											k = 0;
										}
									}
								} while (k == 0);
							}

						}

					} while ((!feof(file1)) && (sign != '\n'));
					fprintf(file2, "%c", sign);
				}

				else if (sign == '*')
				{
					sign2 = fgetc(file1);
					do
					{
						sign = sign2;
						sign2 = fgetc(file1);
					} while (!((sign == '*') && (sign2 == '/')) && (!feof(file1)));
					continue;
				}
				else if (sign == '\'') {
					fprintf(file2, "%c", sign4);
					do {
						fprintf(file2, "%c", sign);
						sign = fgetc(file1);
					} while ((!feof(file1)) && (sign != 39) && (sign != '\n'));
					fprintf(file2, "%c", sign);
				}
				else if (sign == '"') {
					fprintf(file2, "%c", sign4);
					do {
						do {
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);
						} while ((!feof(file1)) && (sign != '"') && (sign != '\n') && (sign != '\\'));
						if (sign == '"') { v = 1; }
						else if (feof(file1)) { v = 1; }
						else if (sign == '\n') { v = 1; }
						else if (sign == '\\') {
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);

							if (sign == '\n') { v = 0; }
							else v = 0;
						}
					} while (v == 0);

					fprintf(file2, "%c", sign);
				}


				else {
					fprintf(file2, "%c", sign4);
					fprintf(file2, "%c", sign);
				}

			}


			else

				fprintf(file2, "%c", sign);

	}

	fclose(file1);
	fclose(file2);
}
/*void mean(char mass2[50], char mass[50]) {
	FILE* file2 = fopen(mass2, "w");
	FILE* file1 = fopen(mass, "r");
	char sign;
	 randomword(1);
	 randomword(2);
	 randomword(3);
	 randomword(4);
	if (file1 == NULL) {
		printf("Fail contains no information\n");
		return 0;
	}
	while (!feof(file1))
	{
		sign = fgetc(file1);
		if (sign == '�') {
			break;
		}else
	 if (sign == 'i') {//������ �������� ����������
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		if (sign == 'n') {
			fprintf(file2, "%c", sign);
			sign = fgetc(file1);
			if (sign == 't') {
				fprintf(file2, "%c", sign);
				fprintf(file2, " ", sign);
				sign = fgetc(file1);
				fprintf(file2, "%s", massint);
				sign = fgetc(file1);
			}
			else fprintf(file2, "%c", sign);
		}
		else fprintf(file2, "%c", sign);
	}
		if (sign == 'r') {//������ �������� ����������
			fprintf(file2, "%c", sign);
			sign = fgetc(file1);
			fprintf(file2, "%c", sign);
		}else

		if (sign == '(') {//������ �������� ����������
			fprintf(file2, "%c", sign);
			sign = fgetc(file1);
			fprintf(file2, "%c", sign);
		}

	else if (sign == 'v') {//������ �������� ����������
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		if (sign == 'o') {
			fprintf(file2, "%c", sign);
			sign = fgetc(file1);
			if (sign == 'i') {
				fprintf(file2, "%c", sign);
				sign = fgetc(file1);
				if (sign == 'd') {
					fprintf(file2, "%c", sign);
					fprintf(file2, " ", sign);
					sign = fgetc(file1);
					fprintf(file2, "%s", massvoid);
					sign = fgetc(file1);
				}
				else fprintf(file2, "%c", sign);
			}
			else fprintf(file2, "%c", sign);
		}
		else fprintf(file2, "%c", sign);
	}


	else if (sign == 'c') {//������ �������� ����������
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		if (sign == 'h') {
			fprintf(file2, "%c", sign);
			sign = fgetc(file1);
			if (sign == 'a') {
				fprintf(file2, "%c", sign);
				sign = fgetc(file1);
				if (sign == 'r') {
					fprintf(file2, "%c", sign);
					fprintf(file2, " ", sign);
					sign = fgetc(file1);
					fprintf(file2, "%s", masschar);
				}
				else fprintf(file2, "%c", sign);
			}
			else fprintf(file2, "%c", sign);
		}
		else fprintf(file2, "%c", sign);
	}



	else if (sign == 'F') {//������ �������� ����������
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		if (sign == 'I') {
			fprintf(file2, "%c", sign);
			sign = fgetc(file1);
			if (sign == 'L') {
				fprintf(file2, "%c", sign);
				sign = fgetc(file1);
				if (sign == 'E') {
					fprintf(file2, "%c", sign);
					fprintf(file2, "*");
					fprintf(file2, " ", sign);
					sign = fgetc(file1);
					fprintf(file2, "%s", massfile);
					sign = fgetc(file1);
				}
				else fprintf(file2, "%c", sign);
			}
			else fprintf(file2, "%c", sign);
		}
		else fprintf(file2, "%c", sign);
	}
	else fprintf(file2, "%c", sign);
	}

	fclose(file1);
	fclose(file2);
}*/

void func(char mass2[50], char mass[50]) {
	int i, chislo, n = 1;
	char sign;
	FILE* file2 = fopen(mass2, "w");
	FILE* file1 = fopen(mass, "r");
	while (!feof(file1))
	{
		sign = fgetc(file1);
		if (sign == '�') {
			break;
		}
		else if (sign == '#') {
			do {
				fprintf(file2, "%c", sign);
				sign = fgetc(file1);
				if (sign == '>') {
					fprintf(file2, "%c", sign);
					sign = fgetc(file1);
					fprintf(file2, "%c", sign);
					sign = fgetc(file1);
					if (sign != '#') {
						switchforfunc2();
						fprintf(file2, "%s", mass4);
						for (int i = 0; i < 3; i++) {
							switchforfunc();
							fprintf(file2, "%s", mass4);
							fprintf(file2, " ");
							randomword();
							fprintf(file2, "%s", mass3);
							fprintf(file2, "()");
							fprintf(file2, "%s", mass5);
							/*fprintf(file2, "\n");*/
						}
						n = 2;
					}

				}
			} while (n != 2);
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		fprintf(file2, "%c", sign);
		sign = fgetc(file1);
		fprintf(file2, "%c", sign);
		fprintf(file2, " ", sign);
		}
		else
		if (sign == 32) {}//�������
		else 
			if (sign == 'i') {
				fprintf(file2, "%c", sign);
				sign = fgetc(file1);
				if (sign == 'n') {
					fprintf(file2, "%c", sign);
					sign = fgetc(file1);
					if (sign == 't') {
						fprintf(file2, "%c", sign);
						sign = fgetc(file1);
						if (sign == 'f') {
							fprintf(file2, "%c", sign);
						}else
						fprintf(file2, " ", sign);
					}else fprintf(file2, "%c", sign);
				}else fprintf(file2, "%c", sign);
			}
			else
				if (sign == 'c') {
					fprintf(file2, "%c", sign);
					sign = fgetc(file1);
					if (sign == 'h') {
						fprintf(file2, "%c", sign);
						sign = fgetc(file1);
						if (sign == 'a') {
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);
							if (sign == 'r') {
								fprintf(file2, "%c", sign);
								fprintf(file2, " ", sign);
							}
							else
								fprintf(file2, "%c", sign);
						}
						else fprintf(file2, "%c", sign);
					}
					else fprintf(file2, "%c", sign);
				}
				else
					if (sign == 'v') {
						fprintf(file2, "%c", sign);
						sign = fgetc(file1);
						if (sign == 'o') {
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);
							if (sign == 'i') {
								fprintf(file2, "%c", sign);
								sign = fgetc(file1);
								if (sign == 'd') {
									fprintf(file2, "%c", sign);
									if (sign == ')') {
										fprintf(file2, "%c", sign);
									}else
									fprintf(file2, " ", sign);
								}
								else
									fprintf(file2, "%c", sign);
							}
							else fprintf(file2, "%c", sign);
						}
						else fprintf(file2, "%c", sign);
					}
					else
						if (sign == 'r') {
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);
							if (sign == 'e') {
								fprintf(file2, "%c", sign);
								sign = fgetc(file1);
								if (sign == 't') {
									fprintf(file2, "%c", sign);
									sign = fgetc(file1);
									if (sign == 'u') {
										fprintf(file2, "%c", sign);
										sign = fgetc(file1);
										fprintf(file2, "%c", sign);
										sign = fgetc(file1);
										fprintf(file2, "%c", sign);
										sign = fgetc(file1);
										fprintf(file2, "%c", sign);// �������� ��������
										sign = fgetc(file1);
										fprintf(file2, "%c", sign);
										sign = fgetc(file1);//;
										fprintf(file2, "%c", sign);
										if (sign == ')') {
											sign = fgetc(file1);
											fprintf(file2, "%c", sign);
										}
										sign = fgetc(file1);//;
										sign = fgetc(file1);
										fprintf(file2, "%c", sign);
										
										/*fprintf(file2, "\n");*/
									}
									else
										fprintf(file2, "%c", sign);
								}
								else fprintf(file2, "%c", sign);
							}
							else fprintf(file2, "%c", sign);
						}
						else if (sign == 'f'){
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);
							if (sign == 'l') {
								fprintf(file2, "%c", sign);
								sign = fgetc(file1);
								if (sign == 'o') {
									fprintf(file2, "%c", sign);
									sign = fgetc(file1);
									if (sign == 'a') {
										fprintf(file2, "%c", sign);
										sign = fgetc(file1);
										if (sign == 't') {
											fprintf(file2, "%c", sign);
											fprintf(file2, " ", sign);
										}
										else
											fprintf(file2, "%c", sign);
									}
									else fprintf(file2, "%c", sign);
								}
								else fprintf(file2, "%c", sign);
							}
							else fprintf(file2, "%c", sign);
						}
						else if (sign == '\t') {}
						else if (sign == '\n') {}
						else if (sign ==';'){
							fprintf(file2, "%c", sign);
							sign = fgetc(file1);
							if (sign == '\n') {
								count++;
								if ((count % 2) == 0) {
									switchforfunc3();
									fprintf(file2, "%s", mass6);
								}
							}
						}
		else
	    fprintf(file2, "%c", sign);
	}
	/*switchforfunc2();*/
	/*fprintf(file2, "\n");*///���� ��� �������� ����� ����-���� ��������
	for (int i = 0; i < 3; i++) {
		switchforfunc();
		fprintf(file2, "%s", mass4);
		fprintf(file2, " ");
		randomword();
		fprintf(file2, "%s", mass3);
		fprintf(file2, "()");
		fprintf(file2, "%s", mass5);
		/*fprintf(file2, "\n");*///� ��� �����
	}


	fclose(file1);
	fclose(file2);

}

int main(void) {
	int a, i, l;
	char mass[100] = "Source1.c", mass2[100] = { '0' };
	char text[200][100] = { '0' };
	char sign, sign2, sign3 = { '1' }, sign4 = { '1' };

	/*printf("Fail name:\n");
	scanf("%s", &mass);*/
	strcpy(mass2, mass);
	mass2[0] = '1';
	printf("You can see new file!");
	func(mass2, mass);
	/*comment(mass2, mass);*/

	return 0;
}