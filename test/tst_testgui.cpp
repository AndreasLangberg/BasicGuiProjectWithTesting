#include <QtTest>
#include "tst_testgui.h"

void testGui::test_case1()
{
    QFETCH(QTestEventList, events);
    QFETCH(QString, expected);

    events.simulate(mainWindow.ui->lineEdit);

    QCOMPARE(mainWindow.ui->InputLabel->text(), expected);
}

void testGui::test_case1_data()
{
    QTest::addColumn<QTestEventList>("events");
    QTest::addColumn<QString>("Expected");

    QTestEventList test1;
    test1.addKeyClicks("True");
    QTest::newRow("true") << test1 << "True";

    QTestEventList test2;
    test2.addKeyClicks("False");
    QTest::newRow("false") << test2 << "False";
}
