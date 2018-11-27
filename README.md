# Qt Input dialog

## Build
```
$mkdir BUILD
$cd BUILD
$qmake -project -o qt4-input-dialog-example.pro ..
$qmake qt4-input-dialog-example.pro
$make
```

## Basic use case
```qt
InputDialog * d = new InputDialog(0, "Title");
connect(d, SIGNAL(done(const QString &)), ui.lineEdit, SLOT(setText(const QString &)));
d->setModal(true);
d->setCloseWhenDone(true);
d->setText(ui.lineEdit->text());
d->showFullScreen();
```