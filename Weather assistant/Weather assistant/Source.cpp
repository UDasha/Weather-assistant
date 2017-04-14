#include<iostream>
#include<string>
using namespace std;
void main()
{
	enum weather { sunny = 1, cloudy, rain, snow };
	int choice;
	cout << "Choose the number of the weather conditions"<<endl<<"(SUNNY = 1, CLOUDY = 2, RAIN = 3 or SNOW = 4): " << endl;
	cin >> choice;
	cout << endl;
	switch(choice)
	{
	case 1:
		cout << "At sunny days we recommend take your sunglasses!" << endl << endl << endl;
		break;
	case 2:
		cout << "At cloudy days we recommend beware of rain and take your raincoat!" << endl << endl << endl;
		break;
	case 3:
		cout << "At rainy days we recommend take your umbrella!" << endl << endl << endl;
		break;
	case 4:
		cout << "At snowy days we recommend take your fur coat or a jacket!" << endl<<endl<<endl;
		break;
	default: cout << "I don't know what it means :(((" << endl << endl << endl;
	}
	
	int temp = 0;
	int sum = 0;
	double avtemp;
	cout << "To get the avarage temperature of this week you need to enter a temperature for every day " << endl;
	for (int i = 1; i <= 7; i++)
	{
		cout << "Enter the temperature: " << endl;
		cin >> temp;
		sum = sum + temp;
	}
	avtemp = (double)sum / 7;
	cout << "The avarage temperature was: " << avtemp <<" at this week!"<<endl<<endl<<endl;

	string weather_cond;
	cout << "Enter the weather condition! " << endl << "like sunny or rain" << endl;
		cin >> weather_cond;
	if (weather_cond=="sunny")
	{
		cout << "Take your swimsuit and to swim!!! it's too hot here!" << endl;
	}
	else if(weather_cond=="rain")
	{
		cout << "Ohhhhh...take your umbrella! it will be not the best day :(((" << endl;
	}
	else
	{
		cout << "Hey! I don't know what is it!!!! Try again! " << endl;
	}
	system("pause");
}