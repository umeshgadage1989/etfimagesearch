#include "imagefeatures.h"
#include "colorhistogram.h"
#include "luetal_v2.h"
#include "cedd.h"
#include "hmmdquant.h"

#include <QDebug>

ImageFeatures::ImageFeatures()
{
}

DCTFeatures::DCTFeatures()
{
}

ImageFeatures* ImageFeatures::factory(QString name)
{
	if (name == ColorHistogram::static_name())
		return new ColorHistogram();
	if (name == CEDD::static_name())
		return new CEDD();
	if (name == LuEtAl_v2::static_name())
		return new LuEtAl_v2();
	if (name == HMMDquant::static_name())
		return new HMMDquant();
}

void ImageFeatures::vectorDump(QVector<double> vector) {
	QString output;
	for (uint i(0); i<vector.size(); i++)
		output += QString("%1,").arg(vector[i]);
	qDebug() << output;
}

void ImageFeatures::vectorDump(std::vector<double> vector) {
	QString output;
	for (uint i(0); i<vector.size(); i++)
		output += QString("%1,").arg(vector[i]);
	qDebug() << output;
}

void ImageFeatures::vectorDump(std::vector<int> vector) {
	QString output;
	for (uint i(0); i<vector.size(); i++)
		output += QString("%1,").arg(vector[i]);
	qDebug() << output;
}
