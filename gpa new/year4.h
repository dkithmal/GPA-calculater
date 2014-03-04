#ifndef YEAR4_H
#define YEAR4_H

#include <QWidget>
#include "ui_year4.h"


class year4 : public QWidget
{
	Q_OBJECT

public:
	year4(QWidget *parent = 0);
	~year4();
	double totalcredit;
public slots:
	void finalyeargpa();
	void currentgpa();
	

private:
	Ui::year4 ui;
};

#endif // YEAR4_H
