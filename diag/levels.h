/*
*	levels.h;
*/
#ifndef _LEVEL_DRAWER_
#define _LEVEL_DRAWER_
//---------------------------------------------------//
//	includes;
#include <QtCore/QVector>
#include <QtGui/QWidget>
#include <QtGui/QPainter>
#include <QtGui/QMouseEvent>
//---------------------------------------------------//
//	LevelDrawPaneProperties;
struct LevelDrawPaneProperties;
//---------------------------------------------------//
//	LevelDrawPane;
class LevelDrawPane : public QWidget
{
	Q_OBJECT
private:	//	private declarations;
	LevelDrawPaneProperties* properties;

	QPoint dragPos;
	bool moving;
	int selectionIndex;

	struct Level
	{
		float maxValue;			//	max value;
		float currentValue;		//	current value;
		float edgeValue;		//	edge value;
		
		QColor maxColor;		//	max color;
		QColor color;			//	current color; 
		QColor edgeColor;		//	edge color;

		Level()
		{
			edgeColor = QColor(0, 192, 0);
			maxColor = QColor(192, 0, 0);
			color = QColor(0, 0, 192);
			maxValue = currentValue = edgeValue = 0;
		}
	};
	
	typedef QVector<Level> LevelCollection; 

	LevelCollection levels;


protected:	//	protected declarations;
	void mousePressEvent(QMouseEvent* e);	//	mouse press routine;
	void mouseMoveEvent(QMouseEvent* e);	//	mouse move routine;
	void mouseReleaseEvent(QMouseEvent* e);	//	mouse release routine;
	void paintEvent(QPaintEvent* e);		//	painting routine;
	void wheelEvent(QWheelEvent* e);		//	mouse wheel routine;

	void paintLevels(QPainter* painter);	//	paints levels;
	void paintGrid(QPainter* painter);		//	paints grid;

	int levelWidth();						//	returns level width;
	int mapValueToPixel(float v);			//	maps float value to pixel value;
	float mapPixelToValue(int p);			//	maps pixel value to float value;

public:		//	public declarations;
	LevelDrawPane(QWidget* parent = NULL);	//	constructs a new LevelDrawPane instance;
	virtual ~LevelDrawPane();				//	destructs LevelDrawPane instance;		

	void setLeftMargin(int margin);			//	sets left margin;
	void setRightMargin(int margin);		//	sets right margin;
	void setTopMargin(int margin);			//	sets top margin;
	void setBottomMargin(int margin);		//	sets bottom margin;
	void setMaxValue(float v);				//	sets max value;
	void setMinValue(float v);				//	sets min value;
	void setGridStep(float step);			//	sets grid step;

	void setLevelCount(int count);			//	sets level counts;
	void setLevelMaxValue(int index, float v);	//	sets level max value;
	void setLevelValue(int index, float v);		//	sets level value;
	void setLevelMaxColor(int index, const QColor& c);	//	sets level max color value;
	void setLevelColor(int index, const QColor& c);		//	sets level color value;
	void setLevelEdgeColor(int index, const QColor& c);	//	sets level edge color;
	void setLevelEdgeValue(int index,  float v);	//	sets level edge value;

	float levelMaxValue(int index);			//	returns level maximum value;
	float levelValue(int index);			//	returns level value;
	float levelEdgeValue(int index);		//	returns level edge value;

	int levelCount();						//	returns level count;

signals:
	void callMoveEdge();

};
//---------------------------------------------------//
#endif
