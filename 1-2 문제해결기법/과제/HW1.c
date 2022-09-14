#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, count;
	int maxage, minage, maxscore, minscore;
	int maxagecnt = 0, minagecnt = 0, maxscorecnt = 0, minscorecnt = 0;
	int age[100], score[100], maxagegrp[100], minagegrp[100], maxscoregrp[100], minscoregrp[100];

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

	
	for (i = 0; i < count; i++) {
		
		// find max age
		if (i == 0 || age[i] > maxage) {
			maxage = age[i];             /* new max age found  */
			maxagecnt = 0;
			maxagegrp[maxagecnt] = i;	/* save the age index  */
		}
		else if (age[i] == maxage) {
			maxagecnt++;				/* tie max age found  */
			maxagegrp[maxagecnt] = i;	/* save the age index  */
		}

		//find min age
		if (i == 0 || age[i] < minage) {
			minage = age[i];			/* new min age found */
			minagecnt = 0;
			minagegrp[minagecnt] = i;	/* save the age index */
		}
		else if (age[i] == minage) {
			minagecnt++;				/* tie age found */
			minagegrp[minagecnt] = i;	/* save the age index */
		}

		//find max score
		if (i == 0 || score[i] > maxscore) {
			maxscore = score[i];		/* new max score found */
			maxscorecnt = 0;
			maxscoregrp[maxscorecnt] = i;	/* save the score index */
		}
		else if (score[i] == maxscore) {
			maxscorecnt++;					/* tie score found */
			maxscoregrp[maxscorecnt] = i;	/* save the score index */
		}

		//find min score
		if (i == 0 || score[i] < minscore) {
			minscore = score[i];		/* new min score found */
			minscorecnt = 0;
			minscoregrp[minscorecnt] = i;	/* save the score index */
		}
		else if (score[i] == minscore) {
			minscorecnt++;					/* tie score found */
			minscoregrp[minscorecnt] = i;	/* save the score index */
		}
	}

	// print max ages
	for (i = 0; i <= maxagecnt; i++)
		printf("Oldest age(%d) score as %d\n", maxage, score[maxagegrp[i]]);
	// print min ages
	for (i = 0; i <= minagecnt; i++)
		printf("Youngest age(%d) score as %d\n", minage, score[minagegrp[i]]);
	// print max scores
	for (i = 0; i <= maxscorecnt; i++)
		printf("Max score(%d) age as %d\n", maxscore, age[maxscoregrp[i]]);
	// print min scores
	for (i = 0; i <= minscorecnt; i++)
		printf("Min score(%d) age as %d\n", minscore, age[minscoregrp[i]]);
	return 0;
}
