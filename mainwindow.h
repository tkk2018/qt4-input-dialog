#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtGui/QMainWindow>
#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainWindow();

private:
	Ui::MainWindow ui;

public slots:
	void received();
};

#endif // MYCLASS_H
