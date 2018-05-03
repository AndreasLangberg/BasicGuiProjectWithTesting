#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::newInput);
    connect(ui->pushButton_1, &QPushButton::pressed, this, &MainWindow::pushedButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newInput(const QString &text)
{
    if(text == "True")
        ui->InputLabel->setText(text);
    else
        ui->InputLabel->setText("False");
}
void MainWindow::pushedButton()
{
    ui->label->setText("Button Pushed");
}
