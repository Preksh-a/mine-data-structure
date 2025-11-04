#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,subs,*avg,max=0,top=0;
    printf("Enter students: "); scanf("%d",&n);
    int **m=malloc(n*sizeof(int*)); avg=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Subjects of student %d: ",i+1);
        scanf("%d",&subs);
        m[i]=malloc(subs*sizeof(int));
        int sum=0;
        for(j=0;j<subs;j++){ scanf("%d",&m[i][j]); sum+=m[i][j]; }
        avg[i]=sum/subs;
        if(avg[i]>max){max=avg[i];top=i;}
    }
    printf("Topper: Student %d (avg=%d)\n",top+1,max);
    for(i=0;i<n;i++) free(m[i]);
    free(m);free(avg);
}
