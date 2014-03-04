#ifndef GPANEW_H
#define GPANEW_H

#include <QtGui/QMainWindow>
#include "ui_gpanew.h"
#include "year1.h"
#include "year2.h"
#include "year3.h"
#include "year4.h"
#include "level1itm.h"
#include "level2itm.h"
#include "level3itm.h"
#include "level4itm.h"


class gpanew : public QMainWindow
{
	Q_OBJECT

public:
	gpanew(QWidget *parent = 0, Qt::WFlags flags = 0);
	~gpanew();
	int courseselect;


	public slots:
		void course();
		void firstyear();
		void secondyear();
		void thirdyear();
		void forthyear();


private:
	Ui::gpanewClass ui;
	year1 *year_1;
	year2 *year_2;
	year3 *year_3;
	year4 *year_4;
	level1itm *level_1;
	level2itm *level_2;
	level3itm *level_3;
	level4itm *level_4;
};

#endif // GPANEW_H
