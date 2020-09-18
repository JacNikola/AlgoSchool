#include<iostream>
#include "rainy_day"
using namespace std;

int main() 
{
	printf("It is raining outside.");
	bool raining_outside = true;

	if(raining_outside == true && you.go_outside() == true) 
	{
		you.use_umbrella();
	}
	else
	{
		you.enjoy();
	}

	return 0;
}