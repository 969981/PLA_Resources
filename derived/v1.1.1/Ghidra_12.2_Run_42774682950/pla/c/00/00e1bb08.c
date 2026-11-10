/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e1bb08; name: pbackfail
 */


/* std::stringbuf::pbackfail(int) */

int __thiscall std::stringbuf::pbackfail(stringbuf *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar2) {
    *(ulong *)(this + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x10) < uVar2) {
    if (param_1 == -1) {
      *(ulong *)(this + 0x18) = uVar2 - 1;
      *(ulong *)(this + 0x20) = uVar1;
      return 0;
    }
    if ((((byte)this[0x60] >> 4 & 1) != 0) || ((uint)*(byte *)(uVar2 - 1) == (param_1 & 0xffU))) {
      *(ulong *)(this + 0x18) = uVar2 - 1;
      *(ulong *)(this + 0x20) = uVar1;
      *(char *)(uVar2 - 1) = (char)param_1;
      return param_1;
    }
  }
  return -1;
}


