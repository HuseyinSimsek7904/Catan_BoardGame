#ifndef NODE_H
#define NODE_H

class Node {
private:
  int owner;
  int town;
  int city;

public:
  Node();

  int getOwner();
  int getTown();
  int getCity();

  void setTown(int b);
  void setCity();
};

#endif
