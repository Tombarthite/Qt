#include <QApplication>
#include "sortdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SortDialog *sortDialog = new SortDialog;
    sortDialog->show();

    return a.exec();
}
