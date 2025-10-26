//student grading system
#include <stdio.h>

float StudentAVgrade() {
    float average; 
    float G1, G2, G3;
    float tot1, tot2, tot3;
    float G1av, G2av, G3av;
    printf("Enter your FIRST exam score and total (example: 45  50): ");
    scanf("%f %f", &G1, &tot1);
    printf("Enter your Second exam score and total (example: 45 50): ");
    scanf("%f %f", &G2, &tot2);
    printf("Enter your FIRST exam score and total (example: 45 50): ");
    scanf("%f %f", &G3, &tot3);
    
    G1av = (G1 / tot1) * 100;
    G2av = (G2 / tot2) * 100;
    G3av = (G2 / tot3) * 100;
    average = (G1av + G2av + G3av) / 3;

    return average; 
}

int main () {
    float AverageGrade;
    AverageGrade = StudentAVgrade();
    printf("\nAverage: %.2f\n", AverageGrade);

    if (AverageGrade <= 74) {
        printf("TANGINA MOO BAGSAKK!!!!");
    }
    else {
        printf("i miss You!!");
    }
    return 0;
}