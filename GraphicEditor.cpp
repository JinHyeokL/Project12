#include <iostream>
#include "GraphicEditor.h"
using namespace std;

GraphicEditor::GraphicEditor() {}

GraphicEditor::~GraphicEditor() {
    for (auto shape : v) {
        delete shape;
    }
}

void GraphicEditor::create(int num) {
    switch (num) {
    case 1:
        v.push_back(new Line());
        break;

    case 2:
        v.push_back(new Circle());
        break;

    case 3:
        v.push_back(new Rect());
        break;

    default:
        cout << "잘못된 입력입니다." << endl;
        break;
    }
}

void GraphicEditor::idel(int num) {
    if (num< 0||num >= v.size()) {
        cout << "인덱스를 잘못 입력하셨습니다." << endl;
        return;
    }
    delete v[num];
    v.erase(v.begin() + num);
}

void GraphicEditor::show() {
    for (int i = 0; i < v.size(); i++) {
        cout << i << ": ";
        v[i]->paint();
    }
}
