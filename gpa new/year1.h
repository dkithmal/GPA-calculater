#ifndef YEAR1_H
#define YEAR1_H

#include <QWidget>
#include "ui_year1.h"

class year1 : public QWidget
{
	Q_OBJECT

public:
	year1(QWidget *parent = 0);
	~year1();

	

	public slots:
		void semester1gpa();
		void semester2gpa();
		void year1gpa();

private:
	Ui::year1 ui;
};

#endif // YEAR1_H
