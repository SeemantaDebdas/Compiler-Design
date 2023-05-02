#include <stdio.h>
#include <string.h>

struct op{
    char l[23];
    char r[23];
}op[10];

int main() {
    
    int n,i=0;
    
    printf("\nEnter number of values:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("\tleft\t");
        scanf("%s",op[i].l);
        
        printf("\tright\t");
        scanf("%s",op[i].r);
    }
    
    int ln = 0;
    for(i=0;i<n;i++){
        printf("\nLine number = %d\n", ln);
        printf("\t %s",op[i].l);
        printf("\t %s",op[i].r);
        ln++;
    }
    
    printf("\nData Flow analysis\n");
    
    char* match;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            match = strstr(op[j].r,op[i].l);
            if(match){
                printf("\n%s is live at %s \n",op[i].l, op[j].r);
            }
        }
    }

    return 0;
}// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct op{
    char l[23];
    char r[23];
}op[10];

int main() {
    
    int n,i=0;
    
    printf("\nEnter number of values:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("\tleft\t");
        scanf("%s",op[i].l);
        
        printf("\tright\t");
        scanf("%s",op[i].r);
    }
    
    int ln = 0;
    for(i=0;i<n;i++){
        printf("\nLine number = %d\n", ln);
        printf("\t %s",op[i].l);
        printf("\t %s",op[i].r);
        ln++;
    }
    
    printf("\nData Flow analysis\n");
    
    char* match;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            match = strstr(op[j].r,op[i].l);
            if(match){
                printf("\n%s is live at %s \n",op[i].l, op[j].r);
            }
        }
    }

    return 0;
}
