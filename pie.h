#ifndef PIE_H
#define PIE_H

#include <QImage>

class Pie
{
private:
    QImage back;
    QImage front;
public:
    void loadBack(QString path);
    void loadFront(QString path);
    void draw(QPaintDevice* canvas);
    Pie* clone();
signals:

};

#endif // PIE_H
