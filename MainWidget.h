#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

class Widget : public QWidget
{
	Q_OBJECT

public:
	Widget(QWidget *parent = 0);
	~Widget();
};

#endif // MAINWIDGET_H
