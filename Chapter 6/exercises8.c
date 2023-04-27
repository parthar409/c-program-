#include <stdio.h>

int main() {
    int age, count = 0;
    
    for (int i = 1; i <= 100; i++) {
        printf("Enter age of person %d: ", i);
        scanf("%d", &age);
        
        if (age < 50 || age > 60) {
            continue;
        }    
        count++;
    }   
    printf("Number of persons in the age group 50 to 60: %d\n", count);
    
    return 0;
}
