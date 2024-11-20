#pragma once
#include "pointNode.h"

class PointList {
private:
    PointNode* head;

public:
    PointList();
    ~PointList();

    void insertPoint(string, int, int);
    bool isUniqueName(string);
    void displayPoints();
};