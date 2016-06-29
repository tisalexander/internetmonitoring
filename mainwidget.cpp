#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QHostInfo>

MainWidget::MainWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::MainWidget)
{
	ui->setupUi(this);

	connect(ui->pushButton, SIGNAL(clicked(bool)),
			SLOT(onTest()));
}

MainWidget::~MainWidget()
{
	delete ui;
}

void MainWidget::onTest()
{
	QHostInfo::lookupHost("google.com",
						  this, SLOT(onHost(QHostInfo)));
}

void MainWidget::onHost(QHostInfo info)
{
	int count = info.addresses().count();

	if (info.error() == QHostInfo::NoError) {
		ui->plainTextEdit->appendPlainText(QString::number(count));
	} else {
		ui->plainTextEdit->appendPlainText(QString::number(count));
	}
}
