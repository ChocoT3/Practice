#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLEN 10
typedef struct
{
	char* ch;
	int len;
}HString;

void InitStr(HString* S)
{
	S->ch = (char*)malloc(MAXLEN * sizeof(char));
	if (S->ch == NULL)
	{
		printf("…Í«Î ß∞‹");
		exit(EXIT_FAILURE);
	}
	S->len = 0;
}

void ComputeNext(HString* S)
{
    //≈–ø’
    if (S->len == 0) {
        printf("Empty string. Cannot compute next.");
        return;
    }

    int* next = (int*)malloc(S->len * sizeof(int));
    if (next == NULL) {
        printf("…Í«Î ß∞‹");
        exit(EXIT_FAILURE);
    }

    int i = 0, j = 0;
    next[0] = 0;

    while (i < S->len - 1) {
        if (j == 0 || S->ch[i] == S->ch[j]) {
            i++;
            j++;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }

    for (i = 0; i < S->len; i++) {
        printf("next[%d] = %d\n", i, next[i]);
    }

    free(next);
}
int main()
{
	HString S;
	InitStr(&S);
	strcpy(S.ch, "abababc");
	S.len = strlen(S.ch);
	ComputeNext(&S);

	return 0;
}