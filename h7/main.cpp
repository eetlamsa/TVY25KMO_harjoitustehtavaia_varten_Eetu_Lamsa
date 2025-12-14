#include "mainwindow.h"
#include <QApplication>

#ifdef Q_OS_WIN
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    Q_UNUSED(hInstance)
    Q_UNUSED(hPrevInstance)
    Q_UNUSED(lpCmdLine)
    Q_UNUSED(nCmdShow)

    int argc = 0;
    char **argv = nullptr;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
#else
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
#endif
