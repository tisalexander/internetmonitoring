#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QHostInfo>
#include <QWidget>

namespace Ui {
	class MainWidget;
}

class MainWidget : public QWidget
{
	Q_OBJECT

public:
	explicit MainWidget(QWidget *parent = 0);
	~MainWidget();

private slots:
	void onTest();
	void onHost(QHostInfo info);

private:
	Ui::MainWidget *ui;
};

#endif // MAINWIDGET_H
