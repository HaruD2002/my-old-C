/* Intro to CPP
Midtem Lab */
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
	const int arrayset=3;
int	total,
		i=0,
		g[arrayset],
	    a[arrayset];
	while (i<arrayset){
	cout << "what is the radius of garden " << i+1 << " ?> "<< endl;
	cin >> g[i];
	i++;
	}

	float pi=3.1415;
	for (i=0; i<=arrayset; i++){
		a[i]= pi*(pow(static_cast<float>(g[i]),2));
	}

	cout << "Job name "<< setw(15) << "Radius(ft) " << setw(15) << "Fence Len.(ft)" << setw(20) << "   Garden Size(Sq ft.)\n\n";
	cout << setprecision(1) << setiosflags(ios::showpoint) << setiosflags(ios::fixed);
	for (i=0; i<arrayset; i++){
		cout << "Garden " << i+1 << setw(15) << g[i] << setw(15) << (2*pi*g[i]) << setw(20) <<a[i]<<endl<<endl;
	}

	cin >> pi;
	return 0;
}
