#include <stdio.h>
int main()
{

  int i, j, m, n;
  int score[100][100];
    label2:
    printf("Enter number of students : ");
    scanf("%d",&m);

    printf("Enter number of subjects : ");
    scanf("%d",&n);
    printf("\n-------------Maximum marks per subject = 100-------------\n\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter marks of subject %d : ",j+1);
            scanf("%d", &score[i][j]);
            if (score[i][j]>100){
                printf("Error...Entered marks les than 100....start again\n");
                goto label2;
            }
        }
        printf("\n");
    }


    printf("\nEntered scores in Matrix view : \n");

    for (i = 0; i < m; i++)  {

      printf ("Student %d marks: ", i+1);

            for (j = 0; j < n; j++)

                     printf ("%3d",  score[i][j]);

                           printf("\n");
      }



  int total_score;
  int totalscore;
  int maxMark[i];
  int minMark[i];

  for(i=0;i<m;i++)

  {
  maxMark[i] = 0;
  minMark[i] = 101;
  totalscore=0;
  total_score=0;

  for(j=0;j<n;j++)

  {
    totalscore += score[i][j];
    total_score += score[i][j]/n;

    if (score[i][j] > maxMark[i]) {
        maxMark[i] = score[i][j];
      }
    if (score[i][j] < minMark[i]) {
        minMark[i] = score[i][j];
      }
  }

  printf("\nStudent %d : total = %d, average = %.1f, highest marks = %d, lowest marks = %d", i+1, totalscore, (float)total_score, maxMark[i], minMark[i]);
  }

  printf("\n");


  int avgscore;

  for(j=0;j<n;j++)  {
   maxMark[j] = 0;
   minMark[j] = 101;
   avgscore=0;

    for(i=0;i<m;i++) {

        avgscore += score[i][j]/n;
        if (score[i][j] > maxMark[j]) {
        maxMark[j] = score[i][j];
        }
        if (score[i][j] < minMark[j]) {
        minMark[j] = score[i][j];
        }
        }
        printf("\nSubject %d : Average = %.1f, highest marks = %d, lowest marks = %d", j+1,(float)avgscore, maxMark[j], minMark[j]);
      }

  return(0);

}