#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

class PointNode {
private:
    string name;
    int x;
    int y;
    PointNode* next;
    PointNode* prev;

public:
    PointNode();

    PointNode(string, int, int);

    void setName(string);
    void setX(int);
    void setY(int);
    void setNext(PointNode*);
    void setPrev(PointNode*);

    string getName();
    int getX();
    int getY();
    PointNode* getNext();
    PointNode* getPrev();
};