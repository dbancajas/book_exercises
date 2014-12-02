#include<iostream>
#include<vector>

using namespace std;

int main(void){

	vector<float> v;

	for(int i=0; i<25; ++i)
		v.push_back(i*2.2);

	for(int i=0; i<v.size();++i)
		cout<<v[i]<<endl;


	return 0;

}
