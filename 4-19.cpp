#include <iostream>

void oneVeg(double farmArea);
void twoVeg(double farmArea);

using namespace std;

int main() {
    // Write your main here
    double farmArea;
    int numOfVeg;

    cout << "Enter Total Farm Area: ";
    cin >> farmArea;
    cout << endl;

    cout << "How Many Veggietables Do You Want To Grow: ";
    cin >> numOfVeg;
    cout << endl;

    if (numOfVeg == 1)
    {
        void oneVeg(double farmArea);
    } 
    else if (numOfVeg == 2)
    {
        void twoVeg(double farmArea);
    } 

    return 0;
}

void oneVeg(double farmArea) 
{
    double v1SeedCost;
    double v1PlantCost;
    double v1FerCost;
    double v1LaborCost;
    double v1SellingPricePerAcre;
    double totalRevenue;
    double expenses;
    double profit;

    cout << "Enter Seed Cost";
    cin >> v1SeedCost;
    cout << endl;

    cout << "Enter Planting Cost";
    cin >> v1PlantCost;
    cout << endl;

    cout << "Enter Ferilizer Cost";
    cin >> v1FerCost;
    cout << endl;

    cout << "Enter Labor Cost";
    cin >> v1LaborCost;
    cout << endl;

    cout << "Enter Cost Per Acre";
    cin >> v1SellingPricePerAcre;
    cout << endl;

    totalRevenue = v1SellingPricePerAcre * farmArea;
    expenses = v1SeedCost + v1PlantCost + v1LaborCost + v1FerCost;
    profit = totalRevenue - expenses;

    cout << "total revenue: " << totalRevenue << endl;
    cout << "profit/loss: " << profit << endl;

};

void twoVeg(double farmArea) 
{
    double numOfVeg;
    double v1SeedCost;
    double v1PlantCost;
    double v1FerCost;
    double v1LaborCost;
    double v1SellingPricePerAcre;
    double v2SeedCost;
    double v2PlantCost;
    double v2FerCost;
    double v2LaborCost;
    double v2SellingPricePerAcre;
    double v1PercentOfLand;
    double v1Percent;
    double v2PercentOfLand;
    double totalRevenueV1;
    double totalRevenueV2;
    double totalRevenue;
    double expenses;
    double profit;

    cout << "Enter Seed Cost";
    cin >> v1SeedCost;
    cout << endl;

    cout << "Enter Planting Cost";
    cin >> v1PlantCost;
    cout << endl;

    cout << "Enter Ferilizer Cost";
    cin >> v1FerCost;
    cout << endl;

    cout << "Enter Labor Cost";
    cin >> v1LaborCost;
    cout << endl;

    cout << "Enter Cost Per Acre";
    cin >> v1SellingPricePerAcre;
    cout << endl;

    cout << "Enter Veg Two Seed Cost";
    cin >> v1SeedCost;
    cout << endl;

    cout << "Enter Veg Two Planting Cost";
    cin >> v1PlantCost;
    cout << endl;

    cout << "Enter Veg Two Ferilizer Cost";
    cin >> v1FerCost;
    cout << endl;

    cout << "Enter Veg Two Labor Cost";
    cin >> v1LaborCost;
    cout << endl;

    cout << "Enter Veg Two Cost Per Acre";
    cin >> v1SellingPricePerAcre;
    cout << endl;

    v1PercentOfLand = (v1Percent/100);
    v2PercentOfLand = v1PercentOfLand - 100;

    totalRevenueV1 = v1SellingPricePerAcre * v1PercentOfLand;
    totalRevenueV2 = v2SellingPricePerAcre * v2PercentOfLand;
    totalRevenue = totalRevenueV1 + totalRevenueV2;
    expenses = v1SeedCost + v1PlantCost + v1LaborCost + v1FerCost + v2SeedCost + v2PlantCost + v2LaborCost + v2FerCost;
    profit = totalRevenue - expenses;

    cout << "total revenue: " << totalRevenue << endl;
    cout << "profit/loss: " << profit << endl;


};
