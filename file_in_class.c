#include <stdio.h>

int main(){
    int choice = 0;
    while (choice != 4){
        printf("===== File Handling Menu ======\n");
        printf("1. Create a new file\n");
        printf("2. Write text to an existing file.\n");
        printf("3. Read and display the content of a file.\n");
        printf("4. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            char input[50];
            
            FILE *fp;
            printf("Enter a file name:\n");
            scanf("%s", input);
            if ((fp = fopen(input,"w")) == NULL){
                printf("File could not be created.\n");
            }
            else
            {
                printf("File has been successfully created.\n");
            }
            fclose(fp);
            break;
        case 2:
            
            
            printf("Enter the file name:\n");
            scanf("%s", input);
            if ((fp = fopen(input,"a")) == NULL){
                printf("File could not be created.\n");
            }
            else
            {
                char line_input[200];
                printf("Enter a line you want to input to your file.\n");
                getchar();
                fgets(line_input,sizeof(line_input), stdin);
                fprintf(fp, "%s", line_input);
                printf("Text written to file successfully.\n");
            }
            
            fclose(fp);
            break;
        case 3:
            
            printf("Enter the file name:\n");
            scanf("%s", input);
            
            if ((fp = fopen(input,"r")) == NULL){
                puts("File could not be created.\n");
            }
            else
            {
                char ch;
                while ((ch = fgetc(fp)) != EOF){
                    putchar(ch);
                }
                printf("\n---End of file---\n");
            }
            fclose(fp);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
            break;
        }
    }
}