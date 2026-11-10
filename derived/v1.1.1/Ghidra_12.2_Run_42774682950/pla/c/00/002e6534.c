/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e6534; name: FUN_002e6534
 */


void FUN_002e6534(long *param_1)

{
  undefined *puVar1;
  ostream *this;
  
  this = (ostream *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1 = PTR_DAT_04373800 + 0x40;
  *(undefined **)this = PTR_DAT_04373800 + 0x18;
  *(undefined **)(this + 0x70) = puVar1;
  *(undefined **)(this + 8) = PTR_DAT_04373808 + 0x10;
  if (((byte)this[0x48] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(this + 0x58));
  }
  std::streambuf::~streambuf((streambuf *)(this + 8));
  std::ostream::~ostream(this);
  std::ios::~ios((ios *)(this + 0x70));
  return;
}


