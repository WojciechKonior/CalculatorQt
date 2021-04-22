#include "calculatorqt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorQt w;
    w.show();
    return a.exec();
}
