#ifndef FIRMWAREFINDER_H
#define FIRMWAREFINDER_H

#include <QObject>

class FirmwareFinder : public QObject
{
    Q_OBJECT
public:
    explicit FirmwareFinder(QObject *parent = 0);

signals:

public slots:
};

#endif // FIRMWAREFINDER_H