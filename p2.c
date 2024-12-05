#include<stdio.h>
int main()
{
int actorsid[6];
int actorstimeinminutesindrama[6];
for(int i = 0 ; i<=5; i++)
{
    printf("Enter %d Actor ID: ",i+1);
    scanf("%d",&actorsid[i]);
}
for(int i = 0 ; i<=5; i++)
{
    printf("Enter %d Actor Time In Minutes: ",i+1);
    scanf("%d",&actorstimeinminutesindrama[i]);
}
for(int i = 0 ; i<=5; i++)
{
    printf("Actor %d ID: %d\n",i+1,actorsid[i]);

}
for(int i = 0 ; i<=5; i++)
{
    printf("Actor %d Time In Minutes: %d\n",i+1,actorstimeinminutesindrama[i]);

}

int sum = 0;
for(int i = 0 ; i<=5; i++)
{
    sum = sum + actorstimeinminutesindrama[i];
}
printf("Total Time Of All Actors: %d",sum);
int seconds = sum*60;
float cost = seconds*2.5;
printf("Total Drama Cost : Rs.%f",cost);
int less=0,more=0;
int actorid;
printf("Enter Actor ID: ");
scanf("%d",&actorid);
for(int i = 0; i<=5; i++)
{
    if(actorsid[i]>actorid)
    {
        more++;
    }
    else
    less++;
}
printf("%d actor_ids of ActorsID array are greater than the inputted actor_id (ACT_ID)\n",more);
printf("%d actor_ids of ActorsID array are less than the inputted actor_id (ACT_ID)\n",less-1);
int max = actorsid[0];
for(int i = 0; i<=5; i++)
{
    if(max<actorsid[i])
    {
        max = actorsid[i];
    }
}
printf("Maximum Actor Id: %d\n",max);
int choice;
printf("Enter Index Number: ");
scanf("%d",&choice);
printf("%d\n",actorsid[choice]);
printf("%d\n",actorstimeinminutesindrama[choice]);
int s = actorsid[0];
actorsid[0] = actorsid[1] ;
actorsid[1] = s ;
int count = 0;
for(int i = 0; i<=5; i++)
{
    if(actorsid[i]%8!=0)
    {
        count++;
        break;

    }
}
if(count==0)
{
    printf("Storing According to Pattern!");
}
else
printf("Not Storing In Pattern!");
return 0;
}