#include <iostream>

int main() {
    double totalMiles{0},totalGallons{0},tripMiles{0}, tripGallons{0};
    double totalMPG{0}, tripMPG{0};

    while(totalMiles != -1) {

        std::cout << "\nEnter miles driven (-1 to quit): " << std::endl;
        std::cin >> tripMiles;

        if(tripMiles == -1)
        {
            break;
        }

        totalMiles += tripMiles;

        std::cout << "Enter gallons used: " << std::endl;
        std::cin >> tripGallons;
        totalGallons += tripGallons;

        tripMPG = tripMiles/tripGallons;
        std::cout << "MPG this trip: " << tripMPG <<std::endl;

        totalMPG = totalMiles / totalGallons;
        std::cout << "Total MPG: " << totalMPG << std::endl;

    }
    return 0;

}