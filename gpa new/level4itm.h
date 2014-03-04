#ifndef LEVEL4ITM_H
#define LEVEL4ITM_H

#include <QWidget>
#include "ui_level4itm.h"

class level4itm : public QWidget
{
	Q_OBJECT

public:
	level4itm(QWidget *parent = 0);
	~level4itm();
	double totalcredit;
public slots:
     void finalyeargpa();
	 void currentgpa();

private:
	Ui::level4itm ui;
};

#endif // LEVEL4ITM_H
