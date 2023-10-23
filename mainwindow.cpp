#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    builders[0] = new RusberyBuilder();
    builders[1] = new AppleBuilder();
    builders[2] = new MeatBuilder();
    connect(ui->pushButton, SIGNAL(clicked()), SLOT(BuildRasbery()));
    connect(ui->pushButton_2, SIGNAL(clicked()), SLOT(BuildApple()));
    connect(ui->pushButton_3, SIGNAL(clicked()), SLOT(BuildMeat()));
    connect(ui->pushButton_4, SIGNAL(clicked()), SLOT(copy()));


}

void MainWindow::build(int index)
{
    builderIndex = index;
    ui->widget->deletePie();
    builders[index]->start();
    ui->widget->setPie(builders[index]->getResult());
    repaint();
    QTimer::singleShot(500, this, SLOT(firstStep()));
}

void MainWindow::firstStep()
{
    builders[builderIndex]->setBack();
    ui->widget->setPie(builders[builderIndex]->getResult());
    repaint();
    QTimer::singleShot(500, this, SLOT(secondStep()));
}
void MainWindow::secondStep()
{
    builders[builderIndex]->setFront();
    ui->widget->setPie(builders[builderIndex]->getResult());
    repaint();
}

void MainWindow::BuildRasbery()
{
    build(0);
}

void MainWindow::BuildApple()
{
    build(1);
}

void MainWindow::BuildMeat()
{
    build(2);
}

void MainWindow::copy()
{
    ui->widget_2->deletePie();
    ui->widget_2->setPie(ui->widget->getPie()->clone());
    repaint();
}

MainWindow::~MainWindow()
{
    for (int i = 0; i < 3; i++)
    {
        delete builders[i];
    }
    delete ui;
}

