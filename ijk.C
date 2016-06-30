#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main()
{
    int n,i,j,k,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]==a[k]){
                    printf("%d %d %d",a[i],a[j],a[k]);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            break;
    }
    if(flag!=1){
        printf("No such elements");
    }
    
    return 0;
}#include <stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main()
{
    int n,i,j,k,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]==a[k]){
                    printf("%d %d %d",a[i],a[j],a[k]);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            break;
    }
    if(flag!=1){
        printf("No such elements");
    }
    
    return 0;
}
