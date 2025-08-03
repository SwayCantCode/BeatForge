#include "PluginProcessor.h"
#include "PluginEditor.h"

MelodyCrafterAudioProcessor::MelodyCrafterAudioProcessor() {}
MelodyCrafterAudioProcessor::~MelodyCrafterAudioProcessor() {}

const juce::String MelodyCrafterAudioProcessor::getName() const { return "MelodyCrafter"; }
void MelodyCrafterAudioProcessor::prepareToPlay(double, int) {}
void MelodyCrafterAudioProcessor::releaseResources() {}

void MelodyCrafterAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer&) {
    buffer.clear();
}

bool MelodyCrafterAudioProcessor::hasEditor() const { return true; }
juce::AudioProcessorEditor* MelodyCrafterAudioProcessor::createEditor() {
    return new MelodyCrafterAudioProcessorEditor(*this);
}

bool MelodyCrafterAudioProcessor::isBusesLayoutSupported(const BusesLayout& layouts) const {
    return layouts.getMainOutputChannelSet() != juce::AudioChannelSet::disabled();
}

int MelodyCrafterAudioProcessor::getNumPrograms() {
    return 1;
}

int MelodyCrafterAudioProcessor::getCurrentProgram() {
    return 0;
}

void MelodyCrafterAudioProcessor::setCurrentProgram(int index) {}

const juce::String MelodyCrafterAudioProcessor::getProgramName(int index) {
    return "Default";
}

void MelodyCrafterAudioProcessor::changeProgramName(int index, const juce::String& newName) {}

double MelodyCrafterAudioProcessor::getTailLengthSeconds() const {
    return 0.0;
}

void MelodyCrafterAudioProcessor::getStateInformation(juce::MemoryBlock& destData) {
    // For now, do nothing
}

void MelodyCrafterAudioProcessor::setStateInformation(const void* data, int sizeInBytes) {
    // For now, do nothing
}

bool MelodyCrafterAudioProcessor::acceptsMidi() const {
    return true; // Change to false if your plugin doesn't need MIDI input
}

bool MelodyCrafterAudioProcessor::producesMidi() const {
    return false;
}

bool MelodyCrafterAudioProcessor::isMidiEffect() const {
    return false;
}


juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new MelodyCrafterAudioProcessor();
}

