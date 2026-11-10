/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a090; name: FUN_0044a090
 */


char * FUN_0044a090(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xfffffeff;
  if ((param_1 | 8) != 0x10a) {
    uVar1 = param_1;
  }
  if (uVar1 < 0x1f) {
    return (&PTR_DAT_04166750)[(int)uVar1];
  }
  return "(unknown)";
}


