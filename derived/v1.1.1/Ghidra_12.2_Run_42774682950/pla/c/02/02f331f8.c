/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f331f8; name: ~SystemEvent
 */


/* nn::os::SystemEvent::~SystemEvent() */

void __thiscall nn::os::SystemEvent::~SystemEvent(SystemEvent *this)

{
  if (this[0x28] == (SystemEvent)0x0) {
    return;
  }
  nn::os::DestroySystemEvent((SystemEventType *)this);
  return;
}


