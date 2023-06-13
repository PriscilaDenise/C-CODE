# include <stdio.h>
int main(){
    int year, points;
    printf("Input year:");
    scanf("%d", &year);
    if (year == 1){
        printf("Submit A level results:");
        scanf("%d", &points);
        if (points > 10){
            printf("You have been considered.");
        } else {
            printf("Sorry, you do not qualify.");
        }
    }else{
        printf("You are not considered for the project.");
    }
    return 0;
        }
        

    


