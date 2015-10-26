/*
*	levels.cpp;
*/
//---------------------------------------------------//
//	includes;
#include "levels.h"
//---------------------------------------------------//
//	LevelDrawPaneProperties;
struct LevelDrawPaneProperties
{
private:
	friend class LevelDrawPane;

	int marginLeft;
	int marginRight;
	int marginTop;
	int marginBottom;
	
	float maxValue;
	float minValue;
	float scrollStep;

	float hGridStep;

	LevelDrawPaneProperties();
};

LevelDrawPaneProperties::LevelDrawPaneProperties()
{		
	hGridStep = 0.5;
	scrollStep = (float)0.1;
	minValue = 0;
	maxValue = 5;
	marginLeft = marginRight = marginTop = 10;
	marginBottom = marginTop = 20;

}
//---------------------------------------------------//
//	LevelDrawPane;
LevelDrawPane::LevelDrawPane(QWidget *parent) : QWidget(parent)
{
	properties = new LevelDrawPaneProperties;
	setMouseTracking(true);
	setLevelCount(1);
	moving = false;
	selectionIndex = -1;
}

LevelDrawPane::~LevelDrawPane()
{
	delete properties;
}

void LevelDrawPane::mousePressEvent(QMouseEvent *e)
{

	if(e->buttons() & Qt::LeftButton)
	{
		for(int i=0; i<levels.count(); i++)
		{
			int x = properties->marginLeft + i*levelWidth() + 20;
			int y = mapValueToPixel(levels[i].edgeValue);
			QRect rect(x, y-2, levelWidth()-2,  6);

			if(rect.contains(e->pos()))
			{
				moving = true;
				selectionIndex = i;
				dragPos = e->pos();
				break;
			}
		}	
	}
}

void LevelDrawPane::mouseMoveEvent(QMouseEvent *e)
{
	if(moving)
	{
		int dy = e->y() - dragPos.y();
		float edge = -mapPixelToValue(dy);
		float new_edge = levels[selectionIndex].edgeValue + edge;

		if(new_edge > properties->minValue && new_edge < properties->maxValue)
		{
			levels[selectionIndex].edgeValue = new_edge;
			emit callMoveEdge();
			update();
		}
		dragPos = e->pos();
	}
}

void LevelDrawPane::mouseReleaseEvent(QMouseEvent *)
{
	moving = false;
}

void LevelDrawPane::wheelEvent(QWheelEvent* e)
{
	for(int i=0; i<levels.count(); i++)
	{
		int x = properties->marginLeft + i*levelWidth() + 20;
		int y_top = mapValueToPixel(properties->maxValue);
		QRect rect(x, y_top, levelWidth()-2, height() - properties->marginBottom - y_top);	

		if(rect.contains(e->pos()))
		{
			float new_edge = levels[i].edgeValue + (e->delta() > 0 ? properties->scrollStep : -properties->scrollStep);	

			if(new_edge > properties->minValue && new_edge < properties->maxValue)
			{
				levels[i].edgeValue = new_edge;
			}
		}
	}
}

void LevelDrawPane::paintEvent(QPaintEvent *)
{
	QPainter painter;
	painter.begin(this);
	//painter.fillRect(rect(), QBrush(QColor(Qt::white)));
	paintLevels(&painter);
	paintGrid(&painter);
	painter.end();
}

void LevelDrawPane::paintGrid(QPainter* painter)
{
	painter->save();
	painter->setPen(QPen(Qt::DotLine));
	
	for(float i=properties->minValue; i<=properties->maxValue; i+=properties->hGridStep)
	{
		int pixel = mapValueToPixel(i);
		painter->drawText(properties->marginLeft, pixel + 5, QString::number(i));
		painter->drawLine(properties->marginLeft + 10, pixel, width() - properties->marginRight,  pixel);
	}

	painter->restore();
}

void LevelDrawPane::paintLevels(QPainter* painter)
{
QRect maxTextRect;
QRect edgeTextRect;

//for(int i=0; i<levels.count(); i++)
for(int i=levels.count()-1; i>=0; i--)
	{
		int x = properties->marginLeft + 20;		//..
		int y = mapValueToPixel(levels[i].currentValue);
		int y_max = mapValueToPixel(levels[i].maxValue);
		int y_edge = mapValueToPixel(levels[i].edgeValue);

		maxTextRect.setRect(x, height() - properties->marginBottom, levelWidth()-2, properties->marginBottom);
		edgeTextRect.setRect(x, 0, levelWidth()-2, properties->marginTop);
										//..

		painter->fillRect(x, y_max, levelWidth()-2, height() - properties->marginBottom - y_max, QBrush(levels[i].maxColor));
		painter->fillRect(x, y, levelWidth()-2, height() - properties->marginBottom - y, QBrush(levels[i].color));

		painter->save();
		painter->setPen(QPen(QBrush(levels[i].edgeColor), 2) );
		painter->drawLine(x, y_edge, x + levelWidth()-2,  y_edge);
		painter->restore();		
	}
	painter->drawText(maxTextRect, Qt::AlignCenter, QString::number(levels[0].maxValue, 'f', 2)); 
	painter->drawText(edgeTextRect, Qt::AlignCenter, QString::number(levels[0].edgeValue, 'f', 2)); 
}

void LevelDrawPane::setLeftMargin(int margin)
{
	properties->marginLeft = margin;
	update();
}

void LevelDrawPane::setRightMargin(int margin)
{
	properties->marginRight = margin;
	update();
}

void LevelDrawPane::setTopMargin(int margin)
{
	properties->marginTop = margin;
	update();
}

void LevelDrawPane::setBottomMargin(int margin)
{
	properties->marginBottom = margin;
	update();
}

void LevelDrawPane::setMaxValue(float v)
{
	properties->maxValue = v;
	update();
}

void LevelDrawPane::setMinValue(float v)
{
	properties->minValue = v;
	update();
}

void LevelDrawPane::setGridStep(float step)
{
	properties->hGridStep = step;
	update();
}

void LevelDrawPane::setLevelCount(int count)
{
	if(count > 0)
	{
		levels.resize(count);
		update();
	}
}

void LevelDrawPane::setLevelMaxValue(int index, float v)
{
	if(index >= 0 && index < levels.count())
	{
		levels[index].maxValue = v;
		update();
	}
}

void LevelDrawPane::setLevelValue(int index, float v)
{
	if(index >= 0 && index < levels.count())
	{
		levels[index].currentValue = v;
		update();
	}
}
void LevelDrawPane::setLevelEdgeValue(int index, float v)
{
	if(index >= 0 && index < levels.count())
	{
		levels[index].edgeValue = v;
		update();
	}
}

void LevelDrawPane::setLevelColor(int index, const QColor& c)
{
	if(index >= 0 && index < levels.count())
	{
		levels[index].color = c;
		update();
	}	
}

void LevelDrawPane::setLevelMaxColor(int index, const QColor& c)
{
	if(index >= 0 && index < levels.count())
	{
		levels[index].maxColor = c;
		update();
	}	
}

void LevelDrawPane::setLevelEdgeColor(int index, const QColor& c)
{
	if(index >= 0 && index < levels.count())
	{
		levels[index].edgeColor = c;
		update();
	}	
}

int LevelDrawPane::mapValueToPixel(float v)
{
	int minPixel = properties->marginTop; 
	int maxPixel = height() - properties->marginBottom;
	float k = float(maxPixel - minPixel)/(properties->maxValue - properties->minValue);

	return(maxPixel - k*v);
}

float LevelDrawPane::mapPixelToValue(int v)
{
	int minPixel = properties->marginTop; 
	int maxPixel = height() - properties->marginBottom;
	float k = (properties->maxValue - properties->minValue)/float(maxPixel - minPixel);

	return(k*v);
}

int LevelDrawPane::levelWidth()
{
	int x0 = properties->marginLeft + 20;
	int x1 = width() - properties->marginRight - 10;
	int w = (x1 - x0);									//..
	

	return(w);
}

int LevelDrawPane::levelCount()
{
	return(levels.count());
}

float LevelDrawPane::levelEdgeValue(int index)
{
	if(index >= 0 && index < levels.count())
		return(levels[index].edgeValue);
	else
		return(0);
}

float LevelDrawPane::levelMaxValue(int index)
{
	if(index >= 0 && index < levels.count())
		return(levels[index].maxValue);
	else
		return(0);
}

float LevelDrawPane::levelValue(int index)
{
	if(index >= 0 && index < levels.count())
		return(levels[index].currentValue);
	else
		return(0);
}
