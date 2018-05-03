#include <QtTest>
#include "tst_testgui.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    testGui tg;

    return QTest::qExec(&tg, argc, argv);
}
