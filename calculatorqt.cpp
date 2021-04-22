#include "calculatorqt.h"
#include "ui_calculatorqt.h"

CalculatorQt::CalculatorQt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorQt)
{
    ui->setupUi(this);
}

CalculatorQt::~CalculatorQt()
{
    delete ui;
}

