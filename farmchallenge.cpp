#include <iostream>
using namespace std;


int animals(int chicken, int cows, int pigs){
	int chkleg = 0, cleg = 0, pleg = 0;
	int sum=0;
	for (int i=1; i<=chicken; i++){
		chkleg += 2;
	}
	for (int i=1; i<=cows; i++){
		cleg += 4;
	}
	for (int i=1; i<=pigs; i++){
		pleg += 4;
	}
	sum = chkleg + cleg + pleg;
	return sum;
}










int main()
{
    cout<<"In this challenge, a farmer breeds 3 animals"<<endl;
    cout<<"Chicken = 2 legs\nCows = 4 legs\nPigs = 4 legs"<<endl;
    cout<<"The farmer will give you the sub total of each animals in the farm.\nYou have to create a function that returns the total number of legs of all the animals."<<endl;
    cout<<"Take note that you will return the TOTAL NUMBER OF LEGS not the total number of animals in the farm."<<endl;
    cout<<"The order of animals passed is `animals(chickens, cows, pigs)`"<<endl;
    
    cout<<"Total number of legs: "<<animals(2,3,4)<<" legs";
    
    
}
