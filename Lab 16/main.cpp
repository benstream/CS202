#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
#include<string>
#include <random>
#include <utility>

using std::begin;
using std::end;
using std::pair;
using std::sort;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
	std::random_device rd;
	std::mt19937 gen{ rd() };
	vector<string> Apples{ "Granny Smith","Honey Crisp","Golden Delicous","Fuji","Red Delicous" };
	vector<double> Prices{ 4.99,3.49,5.22,2.39,6.59};
	vector<pair <string, double>> ApplePricesList;
	cout << "ASSIGNING RANDOM APPLES A PRICE" << endl;

	std::shuffle(Apples.begin(), Apples.end(), gen);
	for (int i=0; i < Prices.size(); i++) {
		auto apple_Prices = std::make_pair(Apples[i], Prices[i]);
		cout <<"Price of "<< apple_Prices.first << "per lb is: " << apple_Prices.second << endl;
		ApplePricesList.push_back(apple_Prices);
	}
	sort(ApplePricesList.begin(), ApplePricesList.end(), [](auto a, auto b) {return a.second < b.second; });
	cout << "APPLES BY BY PRICE" << endl;
	for(int i = 0; i < ApplePricesList.size(); i++) {
	 
		cout << "Price of " << ApplePricesList[i].first << " per lb is: " << ApplePricesList[i].second << endl;


	}
	
}