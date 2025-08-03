#include "PluginEditor.h"

MelodyCrafterAudioProcessorEditor::MelodyCrafterAudioProcessorEditor(MelodyCrafterAudioProcessor& p)
    : AudioProcessorEditor(&p), processorRef(p) {
    setSize(400, 300);
}

void MelodyCrafterAudioProcessorEditor::paint(juce::Graphics& g) {
    g.fillAll(juce::Colours::darkslategrey);
    g.setColour(juce::Colours::white);
    g.setFont(15.0f);
    g.drawFittedText("MelodyCrafter", getLocalBounds(), juce::Justification::centred, 1);
}

void MelodyCrafterAudioProcessorEditor::resized() {}
