#ifndef LEVEL3ITM_H
#define LEVEL3ITM_H

#include <QWidget>
#include "ui_level3itm.h"

class level3itm : public QWidget
{
	Q_OBJECT

public:
	level3itm(QWidget *parent = 0);
	~level3itm();
	double selectcredit;
	static double TScreditITM,finalgpayear3ITM;

	public slots:
		void semester5gpa();
		void currentgpa();

private:
	Ui::level3itm ui;
};

#endif // LEVEL3ITM_H
