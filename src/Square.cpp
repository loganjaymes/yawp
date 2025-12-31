#include "Square.h"

void Square::paint (juce::Graphics& g) {
    g.fillAll (juce::Colour(167, 191, 205));

    g.setColour (juce::Colour(214, 222, 223));
    g.setFont (15.0f);
    g.drawFittedText ("Separate window test.", getLocalBounds(), juce::Justification::centred, 1);
}

void Square::resized() {

}
