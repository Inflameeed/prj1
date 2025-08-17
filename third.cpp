#include <iostream>
int main() {

    int dailyGrowth = 50;
    int nightFade = 20;
    int beginHeight = 100;

    int totalHeight = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;


    std::cout << totalHeight << "\n";


    std::cout << "With this program, we can calculate the total height of the bamboo on the third day.";



}