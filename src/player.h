#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
  static inline int playerCount = 1;
  int id;
  int wheat;
  int lamp;
  int log;
  int brick;
  int stone;
  int knight;
  int victory;
  int roadBuild;
  int takeRes;
  int monopoly;

  int townCount;
  int cityCount;
  int openKnight;
  int longRoad;

  int curPoint;

public:
  Player() {
    id = playerCount;
    playerCount++;
    wheat = 0;
    lamp = 0;
    log = 0;
    brick = 0;
    stone = 0;
    knight = 0;
    victory = 0;
    roadBuild = 0;
    takeRes = 0;
    monopoly = 0;

    townCount = 0;
    cityCount = 0;
    openKnight = 0;
    longRoad = 0;

    curPoint = 0;
  }
  int getWheat() { return wheat; }
  void setWheat(int a) { wheat = a; }
  int getLamp() { return lamp; }
  void setLamp(int a) { lamp = a; }
  int getLog() { return log; }
  void setLog(int a) { log = a; }
  int getBrick() { return brick; }
  void setBrick(int a) { brick = a; }
  int getStone() { return stone; }
  void setStone(int a) { stone = a; }
  int getKnight() { return knight; }
  void setKnight(int a) { knight = a; }
  int getVictory() { return victory; }
  void setVictory(int a) { victory = a; }
  int getRoad() { return roadBuild; }
  void setRoad(int a) { roadBuild = a; }
  int getRes() { return takeRes; }
  void setRes(int a) { takeRes = a; }
  int getMono() { return monopoly; }
  void setMono(int a) { monopoly = a; }
  int getTownCount() { return townCount; }
  void setTownCount(int a) { townCount = a; }
  int getCityCount() { return cityCount; }
  void setCityCount(int a) { cityCount = a; }
  int getOpenKnight() { return openKnight; }
  void setOpenKnight(int a) { openKnight = a; }
  int getPoint() { return curPoint; }
  void setPoint(int a) { curPoint = a; }

  int calcPoint() {
    int hesap = 0;
    hesap += (townCount);
    hesap += (cityCount * 2);
    hesap += getVictory();
    curPoint = hesap;
    return hesap;
  }
};

#endif
