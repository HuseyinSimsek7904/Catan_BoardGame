// Map.h
#ifndef MAP_H
#define MAP_H

#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "Node.h"

class Map {
private:
    std::vector<std::vector<int>> grid;
    std::vector<int> trade;
    std::vector<std::vector<int>> edge;
    std::vector<int> tile;
    std::vector<int> numbers;
    std::vector<Node> nodes;

    int knightPosition;

public:
    Map() {
        grid.resize(55);

        grid[1] = {2,9};
        grid[2] = {1,3};
        grid[3] = {2,4,11};
        grid[4] = {3,5};
        grid[5] = {4,6,13};
        grid[6] = {5,7};
        grid[7] = {6,15};

        grid[8] = {9,18};
        grid[9] = {1,8,10};
        grid[10] = {9,11,20};
        grid[11] = {3,10,12};
        grid[12] = {11,13,22};
        grid[13] = {5,12,14};
        grid[14] = {13,15,24};
        grid[15] = {7,14,16};
        grid[16] = {15,26};
        grid[17] = {18,28};

        grid[18] = {8,17,19};
        grid[19] = {18,20,30};
        grid[20] = {10,19,21};
        grid[21] = {20,22,32};
        grid[22] = {12,21,23};
        grid[23] = {22,24,34};
        grid[24] = {14,23,25};
        grid[25] = {24,26,36};
        grid[26] = {16,25,27};
        grid[27] = {26,38};

        grid[28] = {17,29};
        grid[29] = {28,30,39};
        grid[30] = {19,29,31};
        grid[31] = {30,32,41};
        grid[32] = {21,31,33};
        grid[33] = {32,34,43};
        grid[34] = {23,33,35};
        grid[35] = {34,36,45};
        grid[36] = {25,35,37};
        grid[37] = {36,38,47};
        grid[38] = {27,37};

        grid[39] = {29,40};
        grid[40] = {39,41,48};
        grid[41] = {31,40,42};
        grid[42] = {41,43,50};
        grid[43] = {33,42,44};
        grid[44] = {43,45,52};
        grid[45] = {35,44,46};
        grid[46] = {45,47,54};
        grid[47] = {37,46};

        grid[48] = {40,49};
        grid[49] = {48,50};
        grid[50] = {42,49,51};
        grid[51] = {50,52};
        grid[52] = {44,51,53};
        grid[53] = {52,54};
        grid[54] = {46,53};

        trade.resize(55, 0);

        trade[3] = 2;
        trade[4] = 2;
        trade[6] = 6;
        trade[7] = 6;
        trade[8] = 5;
        trade[9] = 5;
        trade[16] = 3;
        trade[26] = 3;
        trade[17] = 6;
        trade[28] = 6;
        trade[37] = 6;
        trade[47] = 6;
        trade[39] = 4;
        trade[40] = 4;
        trade[50] = 1;
        trade[51] = 1;
        trade[53] = 6;
        trade[54] = 6;

        edge = std::vector<std::vector<int>>(55, std::vector<int>(55, 0));

        tile = {0,4,4,4,5,5,5,1,1,1,1,2,2,2,2,3,3,3,3,0};

        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(tile.begin() + 1, tile.end(), std::default_random_engine(seed));

        numbers = {0,2,3,3,4,4,5,5,6,6,8,8,9,9,10,10,11,11,12,0};

        seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::shuffle(numbers.begin() + 1, numbers.end(), std::default_random_engine(seed));

        int index;
        for (int i = 1; i < tile.size(); i++) {
            if (tile[i] == 0) {
                index = i;
            }
        }
        for (int i = 1; i < numbers.size(); i++) {
            if (numbers[i] == 0) {
                std::swap(tile[index], tile[i]);
                knightPosition = i;
            }
        }

        nodes.resize(55);
    }

    std::vector<std::vector<int>> getGrid() {
        return grid;
    }

    std::vector<int> getTrade() {
        return trade;
    }

    std::vector<std::vector<int>> getEdge() {
        return edge;
    }

    std::vector<int> getTile() {
        return tile;
    }

    std::vector<int> getNumbers() {
        return numbers;
    }

    Node getNode(int b) {
        return nodes[b];
    }

    void setNode(Node n, int b) {
        nodes[b] = n;
    }

    void setEdge(int x, int y, int b) {
        edge[x][y] = b;
        edge[y][x] = b;
    }
};

#endif // MAP_H
