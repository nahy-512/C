#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, count;
	int maxage = -1;
	int maxagecnt = 0;
	int age[100], maxagegrp[100], score[100];

	// init data
	for (i = 0; i < 100; i++) {
		int tmp_age, tmp_score;
		printf("Put age and score pair (End:-1,-1): ");
		scanf("%d %d", &tmp_age, &tmp_score);
		if (tmp_age == -1 && tmp_score == -1)
			break;
		age[i] = tmp_age; score[i] = tmp_score;
	}
	count = i;

	// find max age
	for (i = 0; i < count; i++) {
		if (age[i] > maxage) {
			maxage = age[i];              /* new max age found  */
			maxagecnt = 0;
			maxagegrp[maxagecnt] = i;  /* save the age index  */
		}
		else if (age[i] == maxage) {
			maxagecnt = maxagecnt + 1; /* tie max age found  */
			maxagegrp[maxagecnt] = i;  /* save the age index  */
		}
	}

	// print max ages
	for (i = 0; i <= maxagecnt; i = i + 1)
		printf("Oldest age(%d) score as %d\n", maxage, score[maxagegrp[i]]);

	return 0;
}
