#pragma once
#include "routeNode.h"

class RouteList {
private:
    RouteNode* head;

public:
    RouteList();
    ~RouteList();

    void insetRout(string);
    RouteNode* searchRoute(string);
    bool isUniqueName(string);
    void insertPointToRoute(string);
    void removeRoute(string);
    void displayRoutes();
    
};
