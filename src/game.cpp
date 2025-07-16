#include "map.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
  Map Cur;
  vector<int> tile = Cur.getTile();
  for (int i = 0; i < tile.size(); i++) {
    cout << tile[i] << " ";
  }
}
