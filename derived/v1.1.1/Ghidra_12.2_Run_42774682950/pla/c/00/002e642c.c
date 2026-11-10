/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e642c; name: FUN_002e642c
 */


void FUN_002e642c(ostream *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04373800 + 0x40;
  *(undefined **)param_1 = PTR_DAT_04373800 + 0x18;
  *(undefined **)(param_1 + 0x70) = puVar1;
  *(undefined **)(param_1 + 8) = PTR_DAT_04373808 + 0x10;
  if (((byte)param_1[0x48] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x58));
  }
  std::streambuf::~streambuf((streambuf *)(param_1 + 8));
  std::ostream::~ostream(param_1);
  std::ios::~ios((ios *)(param_1 + 0x70));
  return;
}


