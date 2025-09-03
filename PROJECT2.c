#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(const char *password) {
    int length = strlen(password);
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    if (length < 8) {
        return 0; // Too short
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else hasSpecial = 1;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[100];

    printf("Enter your password: ");
    scanf("%99s", password);

    if (isStrongPassword(password)) {
        printf("✅ Your password is strong.\n");
    } else {
        printf("❌ Your password is weak.\n");
        printf("Tip: Use at least 8 characters, including uppercase, lowercase, numbers, and special characters.\n");
    }

    return 0;
}
