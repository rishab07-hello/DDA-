
#include<stdio.h>

bool linearSearch(int arr[],int l,int key){
    for(int i=0;i<l;++i)
        if(arr[i]==key)
            return true;
    return false;
}

int main(){
    int l;
    scanf("%d",&l);
    int arr[l];
    for(int i=0 ; i<l ; ++i)
        scanf("%d",&arr[i]);
    int k;
    scanf("%d",&k);
    if(linearSearch(arr,l,k))
        printf("Found");
    else
        printf("Not Found");
    printf("\n");
}
