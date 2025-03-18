#include <stdio.h>

int main(int argc, char const *argv[]) {
    int physics, chemistry, maths, it, eng, total;
    float average, percentage;

    // Input marks for each subject
    printf("\nEnter the marks of physics: ");
    scanf("%d", &physics);

    printf("Enter the marks of chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter the marks of maths: ");
    scanf("%d", &maths);

    printf("Enter the marks of I.T.: ");
    scanf("%d", &it);

    printf("Enter the marks of English: ");
    scanf("%d", &eng);

    // Calculate total marks
    total = physics + chemistry + maths + it + eng;
    printf("\nTotal marks: %d", total);

    // Calculate average marks
    average = (float)total / 5.0;
    printf("\nAverage marks: %f", average);

    // Calculate percentage
    percentage = ((float)total / 500.0) * 100.0;
    printf("\nPercentage: %f", percentage);

    return 0;
}
