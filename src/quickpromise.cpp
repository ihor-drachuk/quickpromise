#include "quickpromise.h"

#include <QQmlEngine>

static void initMyResource()
{
    Q_INIT_RESOURCE(quickpromise);
}

void QuickPromise::registerTypes(QQmlEngine& engine)
{
    initMyResource();
    engine.addImportPath("qrc:/");
}
