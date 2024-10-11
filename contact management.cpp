#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define NAME_LEN 50

typedef struct {
    char name[NAME_LEN];
    char phone[15];
} Contact;

Contact contacts[MAX];
int count = 0;

void addContact() {
    if (count < MAX) {
        printf("Enter name: ");
        scanf("%s", contacts[count].name);
        printf("Enter phone number: ");
        scanf("%s", contacts[count].phone);
        count++;
    } else {
        printf("Contact list is full!\n");
    }
}

void viewContacts() {
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
    }
}

void searchContact() {
    char name[NAME_LEN];
    printf("Enter name to search: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Found: %s, Phone: %s\n", contacts[i].name, contacts[i].phone);
            return;
        }
    }
    printf("Contact not found!\n");
}

void deleteContact() {
    char name[NAME_LEN];
    printf("Enter name to delete: ");
    scanf("%s", name);
    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j = i; j < count - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            count--;
            printf("Contact deleted!\n");
            return;
        }
    }
    printf("Contact not found!\n");
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}