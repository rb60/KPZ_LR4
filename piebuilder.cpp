#include "piebuilder.h"


void IPieBuilder::start()
{
    result = new Pie();
}

Pie* IPieBuilder::getResult()
{
    return result;
}

void RusberyBuilder::setBack()
{
    if(!result) result = new Pie();
    result->loadBack(":/images/Layer 1.png");
}

void RusberyBuilder::setFront()
{
    if(!result) result = new Pie();
    result->loadFront(":/images/Layer 5.png");
}


void AppleBuilder::setBack()
{
    if(!result) result = new Pie();
    result->loadBack(":/images/Layer 2.png");
}

void AppleBuilder::setFront()
{
    if(!result) result = new Pie();
    result->loadFront(":/images/Layer 6.png");
}


void MeatBuilder::setBack()
{
    if(!result) result = new Pie();
    result->loadBack(":/images/Layer 3.png");
}

void MeatBuilder::setFront()
{
    if(!result) result = new Pie();
    result->loadFront(":/images/dohlaya-mysh2.png");
}


