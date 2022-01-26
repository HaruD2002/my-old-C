#include 
#include;
#include;
using namespace std;
int main(){
cout << "Gia bai toan dan gian trong C++\n";
cout << "Vua ga vua cho\n";
cout << "Bo lai cho tron\n";
cout << "Ba muoi sau(36) con\n";
cout << "Mot tram(100) chan chan\n";
cout << "Hoi may ga, may cho?\n";
cout << "\n";
for (int i = 9; i < 25; i++)
{
if ((i * 2 + (36 - i) * 4) == 100){
cout << "So ga la: " << i << "\n";
cout << "So cho la: " << (36 - i) << "\n";
                        break;
}
}
}
