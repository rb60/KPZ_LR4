#ifndef PIEBUILDER_H
#define PIEBUILDER_H

#include "pie.h"


class IPieBuilder
{
protected:
    Pie* result = nullptr;
public:
    void start();
    virtual void setBack() = 0;
    virtual void setFront() = 0;
    Pie* getResult();
    virtual ~IPieBuilder(){}

};

class RusberyBuilder : public IPieBuilder
{
public:
    void setBack() override;
    void setFront() override;
};

class AppleBuilder : public IPieBuilder
{
public:
    void setBack() override;
    void setFront() override;
};

class MeatBuilder : public IPieBuilder
{
public:
    void setBack() override;
    void setFront() override;
};



#endif // PIEBUILDER_H
