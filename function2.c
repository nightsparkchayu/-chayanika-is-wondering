#include<stdio.h>
void Grade(int marks){
    if(marks>=90){
        printf("Grade A.");
    }
    else if(marks>=80 && marks<90){
        printf("Grade B.");
    }
    else if(marks>=70 && marks<80){
        printf("Grade C.");
    }
    else{
        printf("Grade D.");
    }
}

int main(){
    printf("Enter the marks of 10 students:\n");
    for(int i = 0;i<10;i++){
        int x;
        printf("\nEnter marks: ");
        scanf("%d",&x);
        
        Grade(x);
    }

    return 0;
}