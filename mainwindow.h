#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "piebuilder.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    IPieBuilder* builders[3];
    Ui::MainWindow *ui;
    int builderIndex;
    void build(int index);
public slots:
    void BuildRasbery();
    void BuildApple();
    void BuildMeat();
    void copy();
    void firstStep();
    void secondStep();

};
#endif // MAINWINDOW_H
