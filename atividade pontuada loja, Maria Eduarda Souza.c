#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int qcp, qcm, qcg, qcap, qcam, qcag, qcasp, qcasm, qcasg;
    float camisa_p, camisa_m, camisa_g, calca_p, calca_m, calca_g, casaco_p, casaco_m, casaco_g, valorfinal;

    printf("Informe a quantidade desejada de cada roupa:\nCamisa p:\nCamisa m:\nCamisa g:\nCalca p:\nCalca m:\nCalca g:\nCasaco p:\nCasaco m:\nCasaco g:\n");
    scanf("%d %d %d %d %d %d %d %d %d", &qcp, &qcm, &qcg, &qcap, &qcam, &qcag, &qcasp, &qcasm, &qcasg);
    
    while(getchar() != '\n');

    if (qcp > 0) {
        printf("Insira o valor da camiseta p: ");
        scanf("%f", &camisa_p);
        valorfinal += camisa_p * qcp;
    }
    if (qcm > 0) {
        printf("Insira o valor da camiseta m: ");
        scanf("%f", &camisa_m);
        valorfinal += camisa_m * qcm;
    }
    if (qcg > 0) {
        printf("Insira o valor da camiseta g: ");
        scanf("%f", &camisa_g);
        valorfinal += camisa_g * qcg;
    }

    if (qcap > 0) {
        printf("Insira o valor da calca p: ");
        scanf("%f", &calca_p);
        valorfinal += calca_p * qcap;
    }
    if (qcam > 0) {
        printf("Insira o valor da calca m: ");
        scanf("%f", &calca_m);
        valorfinal += calca_m * qcam;
    }
    if (qcag > 0) {
        printf("Insira o valor da calca g: ");
        scanf("%f", &calca_g);
        valorfinal += calca_g * qcag;
    }

    if (qcasp > 0) {
        printf("Insira o valor do casaco p: ");
        scanf("%f", &casaco_p);
        valorfinal += casaco_p * qcasp;
    }
    if (qcasm > 0) {
        printf("Insira o valor do casaco m: ");
        scanf("%f", &casaco_m);
        valorfinal += casaco_m * qcasm;
    }
    if (qcasg > 0) {
        printf("Insira o valor do casaco g: ");
        scanf("%f", &casaco_g);
        valorfinal += casaco_g * qcasg;
    }

    printf("Valor final = %.2f reais\n", valorfinal);

    return 0;
}