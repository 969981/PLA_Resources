/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1bab8; name: underflow
 */


/* std::stringbuf::underflow() */

ulong __thiscall std::stringbuf::underflow(stringbuf *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(this + 0x30);
  pbVar1 = *(byte **)(this + 0x58);
  if (*(byte **)(this + 0x58) < pbVar2) {
    *(byte **)(this + 0x58) = pbVar2;
    pbVar1 = pbVar2;
  }
  if (((byte)this[0x60] >> 3 & 1) != 0) {
    pbVar2 = *(byte **)(this + 0x20);
    if (*(byte **)(this + 0x20) < pbVar1) {
      *(byte **)(this + 0x20) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(this + 0x18) < pbVar2) {
      return (ulong)**(byte **)(this + 0x18);
    }
  }
  return 0xffffffff;
}


