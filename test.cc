#include <string>
#include <vector>
#include <iostream>
using namespace std;

void getNum(int &val){
    val=2;
}

int main(){
    // int sum=0;
    vector<int> numvec;
    numvec.clear();
    for(int i=0;i<3;i++){
        // getNum(i);
        int res=0;
        getNum(res);
        numvec.push_back(res);
    }
    for(int i=0;i<numvec.size();i++){
        // printf(numvec[i]);
        cout<<numvec[i]<<endl;
    }
    return 0;
}