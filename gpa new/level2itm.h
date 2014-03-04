#ifndef LEVEL2ITM_H
#define LEVEL2ITM_H

#include <QWidget>
#include "ui_level2itm.h"

class level2itm : public QWidget
{
	Q_OBJECT

public:
	level2itm(QWidget *parent = 0);
	~level2itm();

public slots:
	void semester3gpa();
	void semester4gpa();
	void currentgpa();

private:
	Ui::level2itm ui;
};

#endif // LEVEL2ITM_H
