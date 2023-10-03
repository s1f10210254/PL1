#include <stdio.h>
#include <math.h>

typedef struct {
    enum { RECTANGLE, CIRCLE } type;

    union {
        struct {
            int h_len;
            int w_len;
        } rectangle;
        struct {
            int radius;
        } circle;
    };
} figure;

void area(const figure* f){
    switch (f->type){
    case RECTANGLE:
        printf("area = %d\n", f->rectangle.h_len * f->rectangle.w_len);
        break;
    case CIRCLE:
        printf("area = %f\n", M_PI * f->circle.radius * f->circle.radius);
        break;
    };
}

int main(){
    double r = 5;
    printf ("area = %f\n", r * r * M_PI);
    return 0;
}