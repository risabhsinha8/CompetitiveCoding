#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(0));
  int t,n,q;
    t = (rand() % 3) + 1;
    cout << t << endl;
   while(t--)
   {
   	n = (rand() % 35) + 1;
   	q = (rand() % 35) + 1;
   	cout<<n<<" "<<q<<endl;
   	while(n--)
   		cout<<(rand() % 35) + 1<<" ";
   	cout<<endl;
   	while(q--)
   		cout<<(rand() % n) + 1<<" "<<(rand() % 35) + 1<<endl;
   }
}