#include "piedrawer.h"


PieDrawer::PieDrawer(QWidget *parent)
    : QWidget{parent}
{

}



void PieDrawer::setPie(Pie *value)
{
    pie = value;
}

void PieDrawer::deletePie()
{
    delete pie;
}

Pie* PieDrawer::getPie()
{
    return pie;
}

void PieDrawer::paintEvent(QPaintEvent* pe)
{
    if(pie != nullptr)
    {
        pie->draw(this);
    }
}

PieDrawer::~PieDrawer()
{
    delete pie;
}
