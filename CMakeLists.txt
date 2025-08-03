cmake_minimum_required(VERSION 3.15)

project(MelodyCrafter VERSION 0.1.0)

# Disable VST2 completely
set(JUCE_VST2_ENABLED FALSE CACHE BOOL "" FORCE)
set(JUCE_BUILD_VST2_PLUGIN OFF CACHE BOOL "" FORCE)
set(JUCE_PLUGINHOST_VST FALSE CACHE BOOL "" FORCE)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Use local JUCE path (user must replace with actual path)
add_subdirectory(JUCE-master)

juce_add_plugin(MelodyCrafter
    COMPANY_NAME "Vlad"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT TRUE
    NEEDS_MIDI_OUTPUT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE
    COPY_PLUGIN_AFTER_BUILD TRUE
    PLUGIN_MANUFACTURER_CODE Juce
    PLUGIN_CODE MCra
    FORMATS VST3 Standalone
    PRODUCT_NAME "MelodyCrafter"
)

target_sources(MelodyCrafter PRIVATE
    Source/PluginProcessor.cpp
    Source/PluginEditor.cpp
)

target_link_libraries(MelodyCrafter PRIVATE
    juce::juce_audio_utils
)

target_compile_definitions(MelodyCrafter PRIVATE JUCE_DISABLE_VST3_PRESET_VALIDATION)




