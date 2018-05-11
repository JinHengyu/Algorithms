#include <iostream>

using namespace std;
class aa
{
	public: 

	aa(int x){
		cout<<"000"; 
	}
	int x;
};
class bb :public aa
{
	int x; 
};

int main(){
	bb a;
}
