#include<stdio.h>
int main() {
    int mainChoice,subChoice;
    
    printf("Enter main menu option (1-3) : ");
    scanf("%d",&mainChoice);
    
    switch(mainChoice){
        case 1:  //Customer service
            printf("Enter sub-option (1-2) : ");
            scanf("%d",&subChoice);
            
            if (subChoice == 1){
                printf("You selected Customer Service -> Billing Inquiry.\n");
            }
            else if (subChoice == 2){
                printf("You selected Customer Service -> Account Information.\n");
            }
            else{  
                printf("Invalid choice.\n");
                }
            break;
          
        case 2:  //Technical Support
            printf("Enter sub-option (1-2) : ");
            scanf("%d",&subChoice);
            
            if (subChoice == 1){
                printf("You selected Technical Support -> Internet Issues.\n");
            }
            else if (subChoice == 2){
                printf("You selected Technical Support -> Software Issues.\n");
            }
            else {
                printf("Invalid choice");
            }
            break;
        
        case 3: // Sales
            printf("Enter sub-option (1-2) : ");
            scanf("%d",&subChoice);
            
            if (subChoice==1){
                printf("You selected Sales -> Product Information.\n");
            }
            else if (subChoice==2){
                printf("You selected Sales -> Purchase Assistance.\n");
            }
            else{
                printf("Invalid choice");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
