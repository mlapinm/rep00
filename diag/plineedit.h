#ifndef PLINEEDIT_H
#define PLINEEDIT_H

#include <QtGui/QLineEdit>

class PLineEdit : public QLineEdit
{
	Q_OBJECT

public:
	PLineEdit(QWidget *parent = 0);
	~PLineEdit();
	bool bEnter;
	void setSText(QString str);
public slots:
	void rPressed();
	void tChanged(const QString& str);

private:
	
};

#endif // PLINEEDIT_H
