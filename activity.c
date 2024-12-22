// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

void ActivitySelection(int s[],int f[],int n){
    int i,k;
    k=0;
    printf("%d",k);
    for(int i=1;i<n;i++){
        if(s[i]>=f[k]){
            printf("%d",i);
            k=i;
        }
    }
    
}
void main() {
    int i,s[20],f[20],n,m;
    printf("enter the size of start array=");
    scanf("%d",&n);
    printf("enter the size of elements of start array=");
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("enter the size start of finish the array=");
    scanf("%d",&m);
    printf("enter the size of elements of finish array=");

    for(int i=0;i<m;i++){
        scanf("%d",&f[i]);
    }
    ActivitySelection(s,f,n);
}
