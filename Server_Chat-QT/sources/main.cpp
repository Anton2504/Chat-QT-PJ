#include <QApplication>
#include "mainwindow.h"
#include <QTranslator>

using namespace std;

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QTranslator myappTranslator;
  myappTranslator.load("translations/my_ru.qm");
  a.installTranslator(&myappTranslator);

  QTranslator qtTranslator;
  qtTranslator.load("translations/qt_ru.qm");
  a.installTranslator(&qtTranslator);

  MainWindow w;
  w.show();
  return a.exec();
}


