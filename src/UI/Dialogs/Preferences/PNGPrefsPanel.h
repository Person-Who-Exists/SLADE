#pragma once

#include "PrefsPanelBase.h"

namespace slade
{
class FileLocationPanel;

class PNGPrefsPanel : public PrefsPanelBase
{
public:
	PNGPrefsPanel(wxWindow* parent);
	~PNGPrefsPanel() = default;

	void init() override;
	void applyPreferences() override;

	string pageTitle() override { return "PNG Optimization Tools"; }

private:

};
} // namespace slade
