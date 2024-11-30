// FARMER PROBLEM STATEMENT

// Mahesh is a farmer and owns 80 acres of land. His land is equally divided into 5 segments. He grows tomatoes in the 1st segment, potatoes in the 2nd segment, cabbage in the 3rd segment, sunflower in the 4th segment and sugarcane in the 5th segment.
// He is converting his land from chemical-driven farming to chemical-free farming. Mahesh starts with the conversion of vegetables into chemical-free produce. He spends the first 6 months doing the same.
// He then converts the sunflower land bank into chemical-free farming. This takes him another 4 months. Finally, he converts sugarcane into chemical-free farming over the next 4 months.
// He gets a yield of the following for tomatoes. 30% of his tomato land gives him 10 tonne yield per acre.
// The remaining 70% of his tomato land gives him 12 tonnes yield per acre.
// The selling price of tomato is Rs. 7 per Kg.
// The yield of potatoes is 10 tonnes per acre. He sells each kg at Rs. 20.
// The yield of cabbage is 14 tonnes per acre. He sells each kg at Rs. 24.
// The yield of sunflowers is 0.7 tonnes per acre. He sells each kg at Rs. 200.
// The yield of sugarcane is 45 tonnes per acre. He sells each tonne at Rs. 4,000.
// All the crops are sowed at the same time. Mahesh gets the above yield at the above-mentioned rate in one crop cycle across his entire land of 80 acres.
// What is
// a. The overall sales achieved by Mahesh from the 80 acres of land.
// b. Sales realisation from chemical-free farming at the end of 11 months?

#include <stdio.h>

int main() {
    // Constants
    int totalLand = 80;
    int segments = 5;
    int segmentLand = totalLand / segments;

    // Crop Yields per Acre
    double tomatoYield1 = 10.0, tomatoYield2 = 12.0;
    double potatoYield = 10.0;
    double cabbageYield = 14.0;
    double sunflowerYield = 0.7;
    double sugarcaneYield = 45.0;

    // Selling Prices
    double tomatoPrice = 7.0;
    double potatoPrice = 20.0;
    double cabbagePrice = 24.0;
    double sunflowerPrice = 200.0;
    double sugarcanePrice = 4000.0;

    // Tomato Yield Calculation
    double tomatoLand30 = segmentLand * 0.3;
    double tomatoLand70 = segmentLand * 0.7;
    double tomatoSales = (tomatoLand30 * tomatoYield1 + tomatoLand70 * tomatoYield2) * 1000 * tomatoPrice;

    // Other Crop Sales Calculation
    double potatoSales = segmentLand * potatoYield * 1000 * potatoPrice;
    double cabbageSales = segmentLand * cabbageYield * 1000 * cabbagePrice;
    double sunflowerSales = segmentLand * sunflowerYield * 1000 * sunflowerPrice;
    double sugarcaneSales = segmentLand * sugarcaneYield * sugarcanePrice;

    // Total Sales
    double totalSales = tomatoSales + potatoSales + cabbageSales + sunflowerSales + sugarcaneSales;

    // Chemical-Free Farming Sales
    double chemicalFreeSales = tomatoSales + potatoSales + cabbageSales + sunflowerSales;

    // Output Results
    printf("Total Sales from 80 acres of land: Rs. %.2lf\n", totalSales);
    printf("Sales Realisation from Chemical-Free Farming after 11 months: Rs. %.2lf\n", chemicalFreeSales);

    return 0;
}