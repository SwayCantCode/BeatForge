#pragma once
#include <juce_audio_processors/juce_audio_processors.h>

class MelodyCrafterAudioProcessor  : public juce::AudioProcessor
{
public:
    MelodyCrafterAudioProcessor();
    ~MelodyCrafterAudioProcessor() override;

    // Required overrides
    const juce::String getName() const override;
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock (juce::AudioBuffer<float>&, juce::MidiBuffer&) override;
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;

    bool acceptsMidi() const override;
bool producesMidi() const override;
bool isMidiEffect() const override;


    // Plugin metadata
    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    const juce::String getProgramName (int index) override;
    void changeProgramName (int index, const juce::String& newName) override;
    void getStateInformation (juce::MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;

    double getTailLengthSeconds() const override;
};
