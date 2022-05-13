#include<iostream>
using namespace std;
int sum(int ,int );

int main() {

	int a, b;
	cout << "Enter two numbers \n";
	cin >> a >> b;

	cout<<sum(a,b);

	return 0;
}
int sum(int a,int b) {

	return a + b;

}
