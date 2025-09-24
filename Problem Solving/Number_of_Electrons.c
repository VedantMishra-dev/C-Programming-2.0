//  Find out the number of electrons responsible for 
// producing the given charge. Use scientific notation 
// while inputting and outputting the numbers.

#include<stdio.h>

int main() {
    double given_charge, charge_of_electron;
    printf("Enter the charge: ");
    scanf("%lf",&given_charge);
    printf("Enter charge of electron: ");
    scanf("%le",&charge_of_electron);

    double electrons = (given_charge / charge_of_electron)*-1;
    printf("total no of electrons: %le",electrons);
    printf("total no of electrons: %lf",electrons);


}