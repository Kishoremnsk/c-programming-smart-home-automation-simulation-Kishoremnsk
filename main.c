#include <stdio.h>
#include <stdlib.h>

// Status flags for devices
int light = 0;
int fan = 0;
int ac = 0;
int door = 0;

void displayStatus() {
    printf("\n--- Device Status ---\n");
    printf("Light: %s\n", light ? "ON" : "OFF");
    printf("Fan: %s\n", fan ? "ON" : "OFF");
    printf("AC: %s\n", ac ? "ON" : "OFF");
    printf("Door Lock: %s\n", door ? "LOCKED" : "UNLOCKED");
}

void menu() {
    printf("\nSmart Home Control Menu:\n");
    printf("1. Toggle Light\n");
    printf("2. Toggle Fan\n");
    printf("3. Toggle AC\n");
    printf("4. Toggle Door Lock\n");
    printf("5. Show Device Status\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    printf("Welcome to Smart Home Automation Simulator!\n");

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                light = !light;
                printf("Light turned %s.\n", light ? "ON" : "OFF");
                break;
            case 2:
                fan = !fan;
                printf("Fan turned %s.\n", fan ? "ON" : "OFF");
                break;
            case 3:
                ac = !ac;
                printf("AC turned %s.\n", ac ? "ON" : "OFF");
                break;
            case 4:
                door = !door;
                printf("Door is now %s.\n", door ? "LOCKED" : "UNLOCKED");
                break;
            case 5:
                displayStatus();
                break;
            case 0:
                printf("Exiting Smart Home Simulator. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
