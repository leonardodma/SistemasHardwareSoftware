#include "point2d.h"
#include <stdlib.h>

struct _p {
    double x, y;
};

typedef struct _p Point2D;


Point2D *point2D_new(double x, double y) {
    Point2D *p = malloc(sizeof(Point2D));
    p->x = x;
    p->y = y;

    return p;
}

void point2D_destroy(Point2D *p) {
    free(p);
}

double point2D_get_x(Point2D *p) {
    return p->x;
}

double point2D_get_y(Point2D *p) {
    return p->y;
}

Point2D *point2D_add(Point2D *p1, Point2D *p2) {
    Point2D *p = point2D_new(0, 0);
    p->x = point2D_get_x(p1) + point2D_get_x(p2);
    p->y = point2D_get_y(p1) + point2D_get_y(p2);
    return p;
}

double point2D_theta(Point2D *p1, Point2D *p2) {
    double delta_x = point2D_get_x(p1) - point2D_get_x(p2);
    double delta_y = point2D_get_y(p1) - point2D_get_y(p2);

    return delta_y/delta_x;
}

Point2D *point2D_scale(Point2D *p, double s) {
    double x = point2D_get_x(p);
    double y = point2D_get_y(p);

    Point2D *p_2 = point2D_new(x, y);
    p_2->x = x*s;
    p_2->y = y*s;

    return p_2;
}

