#ifndef LEVEL1ITM_H
#define LEVEL1ITM_H

#include <QWidget>
#include "ui_level1itm.h"

class level1itm : public QWidget
{
	Q_OBJECT

public:
	level1itm(QWidget *parent = 0);
	~level1itm();

	public slots:
		void semester1gpa();
		void semester2gpa();
		void year1gpa();

private:
	Ui::level1itm ui;
};

#endif // LEVEL1ITM_H
