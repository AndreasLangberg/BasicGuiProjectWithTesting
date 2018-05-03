#ifndef TST_TESTGUI_H
#define TST_TESTGUI_H

#include "mainwindow.h"

class testGui : public QObject
{
    Q_OBJECT

private slots:
    void test_case1();
    void test_case1_data();

private:
    MainWindow mainWindow;
};

#endif // TST_TESTGUI_H
