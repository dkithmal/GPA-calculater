#ifndef YEAR2_H
#define YEAR2_H

#include <QWidget>
#include "ui_year2.h"

class year2 : public QWidget
{
	Q_OBJECT

public:
	year2(QWidget *parent = 0);
	~year2();

	public slots:
		void semester3gpa();
		void semester4gpa();
		void currentgpa();
		

private:
	Ui::year2 ui;
};

#endif // YEAR2_H
