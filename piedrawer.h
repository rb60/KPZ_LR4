#ifndef PIEDRAWER_H
#define PIEDRAWER_H

#include <QWidget>
#include "pie.h"

class PieDrawer : public QWidget
{
    Q_OBJECT
private:
    Pie* pie = nullptr;
public:
    explicit PieDrawer(QWidget *parent = nullptr);
    void setPie(Pie* value);
    void deletePie();
    Pie* getPie();
    ~PieDrawer();
protected:
    virtual void paintEvent(QPaintEvent* pe);
signals:

};

#endif // PIEDRAWER_H
