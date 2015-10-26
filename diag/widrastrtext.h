#ifndef WIDRASTRTEXT_H
#define WIDRASTRTEXT_H

#include <QtGui/QWidget>
#include <QtGui/QLabel>
#include <QtGui/QStylePainter>

class WidRastrText : public QWidget
{
	Q_OBJECT

public:
	WidRastrText(QWidget *parent);
	~WidRastrText();
	int number;
	QSize sizeRect;
	void setNumber(int num);
	void setSize(int x,int y);
	QPixmap *pixmap;
	QStylePainter painter;

	QLabel label;
signals:
	void signRefresh();
protected:
	void paintEvent(QPaintEvent* e);
private:
	
};

#endif // WIDRASTRTEXT_H
