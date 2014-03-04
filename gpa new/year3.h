#ifndef YEAR3_H
#define YEAR3_H

#include <QWidget>
#include "ui_year3.h"

class year3 : public QWidget
{
	Q_OBJECT

public:
	year3(QWidget *parent = 0);
	~year3();
	 double selectcredit;
	 static double TScredit,finalgpayear3;

	


	public slots:
		void semester5gpa();
		void currentgpa();

private:
	Ui::year3 ui;
	 
};

#endif // YEAR3_H
