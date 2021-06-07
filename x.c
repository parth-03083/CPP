#include<stdio.h>

#include<math.h>
void sort_arr(int arr[],int n){
    
    int counter=1;
    while (counter<n)
    {
        for(int i=0;i<n-counter;i++){
                if(arr[i]>arr[i+1]) 
                {
                    int temp=arr[i];
                    arr[i]= arr[i+1];
                    arr[i+1]=temp;
                }
                
        }
        counter++;
    }
    
    for(int i=0;i<n;i++){
            printf("%d",arr[i]);
    }
    printf("\n");
}

int main(){
    int n,i,m[100],N[100];
    int ctreve,ctrodd;
    int x,y;
    ctreve=0;
    ctrodd=0;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values of the array element\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            m[ctreve]=a[i];
            ctreve++;
        }
        else {
            N[ctrodd]=a[i];
            ctrodd++;
        }
         x=ctreve;
         y=ctrodd;

    }
    sort_arr(m,x);
    sort_arr(N,y);
    
    //now shorting both the arrays
    return 0;
}