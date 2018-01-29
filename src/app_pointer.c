#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
struct namect {
	char * fname;
	char *lname;
	int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *)
void cheanup(struct namect *);
char * s_gets(char * st, int n);

int main(void) {
	struct namect person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);
}

void getinfo(struct namect * pst){
	char temp[SLEN];
	printf("first name. \n");
	s_gets(temp,SLEN);
	//∑÷≈‰ƒ⁄¥Ê
}
