#ifndef BANK_H
#define BANK_H

#include <algorithm>
#include <chrono>
#include <random>
#include <vector>

class Bank {
private:
  int wheat;
  int lamp;
  int log;
  int stone;
  int brick;
  std::vector<int> dev;
  int devCount;

public:
  Bank() {
    wheat = 19;
    lamp = 19;
    log = 19;
    stone = 19;
    brick = 19;
    devCount = 25;

    dev = {1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5,
           5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(dev.begin(), dev.end(), std::default_random_engine(seed));
  }

  int getWheat() { return wheat; }

  void setWheat(int a) { wheat = a; }

  int getLamp() { return lamp; }

  void setLamp(int b) { lamp = b; }

  int getLog() { return log; }

  void setLog(int b) { log = b; }

  int getStone() { return stone; }

  void setStone(int b) { stone = b; }

  int getBrick() { return brick; }

  void setBrick(int b) { brick = b; }

  int getDevCard() {
    devCount--;
    return dev[devCount];
  }
  int getDevCount() { return devCount; }
};

#endif
