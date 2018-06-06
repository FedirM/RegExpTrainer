#include "regexptrainer.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RegExpTrainer w;
    w.show();

    return a.exec();
}
