#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE() ;
 
void setup() {
  MIDI.begin(MIDI_CHANNEL_OMNI) ;
  Serial.begin(31250);
}
 
void loop() {
  if (MIDI.read())
  {
    MIDI.send(MIDI.getType(),
              MIDI.getData1(),
              MIDI.getData2(),
              MIDI.getChannel());
  }
}
 
