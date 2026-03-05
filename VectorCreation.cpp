#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> addData;
	addData.push_back(20);
	addData.push_back(30);
	addData.push_back(40);
	addData.push_back(50);
	
	int size=addData.size();
	
	for(int i=0;i<size;i++){
		cout<<addData[i]<<" ";
	}
}