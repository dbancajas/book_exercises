#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;

class Record{

public:
	Record(){
		name=" ";
		age=0;
		sex=true;
	}	

	Record(string n, int a, bool s):name(n),age(a),sex(s){
	}
	
	string getName()const { return name; }
	int getAge(){ return age; }
	bool getSex() { return sex; }

	bool operator==(const Record & x) {
		return name==x.getName();	
	}

private:
	string name;
	int age;
	bool sex;//male=0 or female=1

};

void gen_random(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

int hash(string input, unsigned int buckets){//hash is sum of ASCII values of character in each string; i.e. name is the key in this hash table
	int sum=0;

	for (int i=0; i < input.size(); i++){
		sum+=(int) input[i];
	}
	return (int)(sum % buckets);
}

class HashTable {

public:
	HashTable(){
		table.clear();
	}

	HashTable(unsigned int size){
		table.clear();
		table.resize(size);
	}

	void put(Record r){
		table[hash(r.getName(),table.size())].push_back(r);
	}

	bool remove(string key){//returns true if deleted
		int ind = hash(key,table.size());
		
		for (int i=0; i < table[ind].size(); i++){
			if ( key == table[ind][i].getName() ) {
				table[ind].erase(table[ind].begin() + i); //erases the element 
				return true;			
			}
		}
		return false;
	}
	int size(){ return table.size(); }

	Record * get(string key) {//returns a pointer to the record if it is in the data structure, otherwise NULL
		int ind = hash(key,table.size());
	
		for (int i=0; i < table[ind].size(); i++){
			if ( key == table[ind][i].getName() ) {
				Record *re = &table[ind][i];
				//return table[ind][i];
				return re;
			}
		}
		return NULL;
	}
	
private:
	vector < vector<Record> > table;

};

int main (void) {

	Record r("dean",28,true);
	Record y("dean",28,true);
	vector<Record> recs;
	vector<string> keys1;
	vector<string> keys2;
	recs.clear();
	srand(time(NULL));

	HashTable hash(1000);
	int numentries=10000;

//1. Vector part
  //insert
	for (int i=0; i < numentries; i++ ) {
		char tmp[10];
		gen_random(tmp,9);
		recs.push_back(Record(string(tmp), (unsigned int)(rand()%100), (bool)rand()%2));		
		keys1.push_back(string(tmp));
	}
  //find each
	for (int i=0; i < numentries; i++ ) {
		Record tmp (keys1[i],28,true);
		vector<Record>::iterator it = find(recs.begin(),recs.end(),tmp);
	}

  //delete each
/*	for (int i=0; i < numentries; i++ ) {
		int x= rand()%keys1.size();
		vector<Record>::iterator it = find(recs.begin(),recs.end(),Record(keys1[x],28,true));

		if (it!=recs.end()){
			recs.erase(it);
			keys1.erase(keys1.begin() + x);
			
		}
	}*/
	

	for (int i=0; i < 20; i++ ) {
		//cout<<recs[i].getName()<<" "<<recs[i].getAge()<<endl;
	}

	hash.put(r);
	
	Record *x = hash.get("dean");
	cout<<x->getAge()<<endl;
	hash.remove("dean");
	
	//if (r==y)cout<<"they are equal"<<endl;
	
	
	return 0;
}
