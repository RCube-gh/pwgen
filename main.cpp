#include<iostream>
#include<time.h>
#include<vector>

using namespace std;
int main(){
	srand((unsigned int)time(NULL));
	int n,ss,rn;
	cout << "input n: ";
	cin >> n;
	while(n<8 || n>100){
		cout << "invalid number" << endl;
		cout << "input n: ";
		cin >> n;
	}
	vector<char> cc={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','!','#','$','%','&','(',')','-','=','^','<','>','?','@',';','{','}','~'};
	ss=cc.size();
	for(int k=0;k<8;k++){
		for(int i=0;i<n;i++){
			rn=rand()%ss;
			cout << cc.at(rn);
		}
		cout << endl;
	}
	return 0;
}

