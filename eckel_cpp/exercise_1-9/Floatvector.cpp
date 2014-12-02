#include<iostream>
#include<vector>

using namespace std;

int main(void){

	vector<float> v,v2,v3;

	for(int i=0; i<25; ++i){
		v.push_back(i*2.2);
		v2.push_back(i*3.3);
	}

	for(int i=0; i<v.size(); ++i)
		v3.push_back(v[i]+v2[i]);



	for(int i=0; i<v.size();++i)
		cout<<v3[i]<<endl;


	return 0;

}
