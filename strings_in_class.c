#include <string.h>
#include <stdio.h>
int isStrongPassword(char password[]) {
    int hasDigit = 0;
    int length = strlen(password);

    if (length < 6)
        return 0;  // must be at least 6 characters

    for (int i = 0; i < length; i++) {
        if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
    }

    return hasDigit;  // must contain at least one digit
}

int main() {
    int choice = 0;
    char password[100];
    char input[100];
    char new_password[100];
    printf("Please enter a password\n");
    scanf("%s", password);
    int logged_in = 0;
    while (choice != 4){
        printf("1 - Login\n");
        printf("2 - Change Password\n");
        printf("3 - Display Current Password\n");
        printf("4 - Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter your password\n");
                scanf("%s", input);
                int result = strcmp(password, input);
                if (result == 0){
                    printf("Login Successful\n");
                    logged_in = 1;
                }
                else {
                printf("Invalid Password");
                }
                break;
            case 2:
                if(!logged_in){
                    printf("Please login first to change password.\n");
                    break;
                }
                while (1) {
                    printf("Enter new password: ");
                    scanf("%s", new_password);

                    if (!isStrongPassword(new_password)) {
                        printf("Weak password. Must be at least 6 characters and contain a digit.\n");
                        continue;
                    }

                    printf("Confirm new password: ");
                    scanf("%s", input);

                    if (strcmp(new_password, input) == 0) {
                        strcpy(password, new_password);
                        printf("Password changed successfully!\n");
                        break;
                    } else {
                        printf("Passwords do not match. Try again.\n");
                    }
                }
                break;
            case 3:
                if (logged_in){
                    printf("Current Password: %s\n", password);
                }
                else{
                    printf("You must login to view password");
                }
                break;
            case 4:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
}