#include<iostream>
using namespace std;

struct HouseRent{
	string name;
	string address;
	int numPeople;
	double rent;
};

int main(){
	HouseRent house[10];
	int index;
	
	for(int i = 0;i < 10;i++){
		cout << "Tenant name: ";
		cin >> ws;
		getline(cin, house[i].name);
		cout << "House address: ";
		cin >> ws;
		getline(cin, house[i].address);
		cout << "Number of people in the house? ";
		cin >> house[i].numPeople;
		cout << "Rent: RM ";
		cin >> house[i].rent;
		
		//identify th house with more than 10 people staying
		if(house[i].numPeople > 10)
			cout << "Owner of house more than 10 people is " <<house[i].name <<endl;
		
		float highest = 0, costperperson;
		
		//calc costperperson
		costperperson = house[i].rent / house[i].numPeople;
		//identify the highest
		if(costperperson > highest){
			highest = costperperson;
			index = 1;
		}
	}
	//display the address with the highest cost
	cout << "Highest cost per person is house at " << house[index].address <<endl;
	
	return 0;
	}
