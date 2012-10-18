#ifndef JPEGIMAGE_GLOBAL_H
#define JPEGIMAGE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(JPEGIMAGE_LIBRARY)
#  define JPEGIMAGESHARED_EXPORT Q_DECL_EXPORT
#else
#  define JPEGIMAGESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // JPEGIMAGE_GLOBAL_H
