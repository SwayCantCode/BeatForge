#pragma once
#include <juce_gui_extra/juce_gui_extra.h>
#include "PluginProcessor.h"

class MelodyCrafterAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    explicit MelodyCrafterAudioProcessorEditor (MelodyCrafterAudioProcessor&);
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    MelodyCrafterAudioProcessor& processorRef;
};
