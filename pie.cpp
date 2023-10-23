#include "pie.h"
#include <QPainter>

void Pie::loadBack(QString path)
{
    back.load(path, "PNG");
}
void Pie::loadFront(QString path)
{
    front.load(path, "PNG");
}
void Pie::draw(QPaintDevice* canvas)
{
    QPainter ptn(canvas);
    ptn.fillRect(0, 0, canvas->width(), canvas->height(), Qt::white);
    ptn.drawImage(0, 0, back);
    ptn.drawImage(0, 0, front);
    ptn.end();
}

Pie* Pie::clone()
{
    Pie* result = new Pie;
    result->back = back;
    result->front = front;
    return result;
}
