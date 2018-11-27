#include "mainwindow.h"
#include "inputdialog.h"

MainWindow::MainWindow(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.toolButton, SIGNAL(clicked()), this, SLOT(received()));
}

MainWindow::~MainWindow()
{

}

void MainWindow::received()
{
	InputDialog * d = new InputDialog(0, "Form");
	connect(d, SIGNAL(done(const QString &)), ui.lineEdit, SLOT(setText(const QString &)));
	d->setModal(true);
	d->setCloseWhenDone(true);
	d->setText(ui.lineEdit->text());
	d->showFullScreen();
}
