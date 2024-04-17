#include<iostream>                                               #include<time.h>
#include<vector>

using namespace std;
int main(){
        srand((unsigned int)time(NULL));
        int n,ss,rn;
        cout << "input n: ";
        cin >> n;
        while(n<8 || n>100){
                cout << "invalid number" << endl;                                cout << "input n: ";
                cin >> n;
        }
        vector<char> cc={'a','b','c','d','e','f','g','h','i','j'$        ss=cc.size();
        for(int k=0;k<8;k++){
                for(int i=0;i<n;i++){
                        rn=rand()%ss;
                        cout << cc.at(rn);
                }
                cout << endl;
        }
        return 0;
}
