# BasicGuiProjectWithTesting

This is a template on how to set up unit testing in Qt, using QtTest, without separating into a new project.

HowTo:
This works by separating the main files for starting the application and running the tests.
Clone build settings for a regular build, but with an added qmake argument "CONFIG+=test".
This lets you separate out what will be considered valid in the .pro file, by adding:

test {
    message(Test build)

    QT += testlib
    TARGET = qttest-example-test
    SOURCES -= main.cpp #Remove old main.cpp

    #Add new main.cpp (With different name to remove confusion for the compiler), and the test files themselves.
    HEADERS  += \
        test/tst_testgui.h

    SOURCES += \
        test/test_main.cpp \
        test/tst_testgui.cpp

} else {
    message(Normal build)
}
