#include "Shape.h"
#include "Start.h"
#include <vector> 

class GraphicEditor {
    std::vector<Shape*> v;
public:
    GraphicEditor();
    ~GraphicEditor();
    void create(int num);
    void idel(int num);
    void show();
};