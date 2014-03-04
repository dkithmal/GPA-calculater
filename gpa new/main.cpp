#include "gpanew.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	gpanew w;
	w.show();
	return a.exec();
}
