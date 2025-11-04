#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,i=0,j=0,k=0;
    scanf("%d%d",&n1,&n2);
    int *a=malloc(n1*sizeof(int)),*b=malloc(n2*sizeof(int));
    for(i=0;i<n1;i++) scanf("%d",a+i);
    for(j=0;j<n2;j++) scanf("%d",b+j);
    int *m=malloc((n1+n2)*sizeof(int));
    i=j=k=0;
    while(i<n1 && j<n2){
        int v = (a[i]<b[j])? a[i++]: (a[i]>b[j]? b[j++]: (i++,b[j++]));
        if(k==0 || m[k-1]!=v) m[k++]=v;
    }
    while(i<n1) if(k==0||m[k-1]!=a[i]) m[k++]=a[i++]; else i++;
    while(j<n2) if(k==0||m[k-1]!=b[j]) m[k++]=b[j++]; else j++;
    m = realloc(m, k*sizeof(int));
    for(i=0;i<k;i++) printf("%d ",m[i]);
    free(a);free(b);free(m);
}
