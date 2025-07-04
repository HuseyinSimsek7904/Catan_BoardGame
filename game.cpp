#include "Bank.h"
#include "Map.h"
#include "Player.h"
#include <vector>
#include <iostream>

using namespace std;

int main(){
    Map Cur;
    vector<int> tile = Cur.getTile();
    for(int i = 0 ; i < tile.size() ; i++){
        cout<< tile[i]<<" ";
    }
}